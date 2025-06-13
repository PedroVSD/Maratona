#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define all(x) x.begin(), x.end()
#define fi first
#define se second

vector<long long> pali();

int main() {
    long long X;
    cin >> X;

    vector<long long> palins = pali();

    long long resp = 1;
    for (auto p : palins) {
        if (p <= X) {
            resp = p;
        } else {
            break;
}
 }

    cout << resp << endl;
    return 0;
}


vector<long long> pali() {
    vector<long long> palins;

    for (int i = 1; i <= 60; i++) {
        int met = (i + 1) / 2;
        long long ini = 1LL << (met - 1);
        long long fim = 1LL << met;

        for (long long j = ini; j < fim; j++) {
            string metbi = bitset<64>(j).to_string().substr(64 - met);
            string bin = metbi;
            string rev = metbi.substr(0, i % 2 ? met - 1 : met);
            reverse(all(rev));
            bin += rev;

            palins.push_back(stoll(bin, nullptr, 2));
 }
}
    return palins;
}