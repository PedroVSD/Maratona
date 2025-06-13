#include <iostream>

using namespace std;

const int modulo = 1e9 + 7;


long long modulo_expressao(long long base, long long expressao, long long modulo) {
    long long resp = 1;
    while (expressao > 0) {
        if (expressao % 2 == 1) {
            resp = (resp * base) % modulo;
        }
        base = (base * base) % modulo;
        expressao /= 2;
    }
    return resp;
}

int main() {
    int N;
    cin >> N;

    long long pot = modulo_expressao(2, N + 1, modulo);

    long long resp = (pot - 3 + modulo) % modulo;

    cout << resp << endl;

    return 0;
}
