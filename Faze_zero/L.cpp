#include <iostream>

using namespace std;

int main(){
    //simular qubit 2^n
    // 1 qubit -> 2 bits
    //1MB = 10^6 bytes
    //1 byte = 8 bits

    int M;
    cin >> M;

    void solve(){
        int a; cin >> a;
        ll ans = a*8*1e6;
        cout << ceil(log2(ans)) << endl;
    }

    return 0;
}