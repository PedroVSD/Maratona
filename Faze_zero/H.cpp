#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool palin(string x);

//Converter para binário e decrementar o valor, algo assim

int main() {
    int X, Y;
    cin >> X;

    for (Y = X; Y >= 1; Y--) {
        int X_bin = Y;
        string Y_bin = "";

        while (X_bin > 0) {
            if(X_bin % 2){
                Y_bin += '1';
            }else{
                Y_bin += '0';
            }
            X_bin /= 2;
        }

        reverse(Y_bin.begin(), Y_bin.end());

        if (palin(Y_bin)) {
            cout << Y << endl;
            break;
        }
    }

    return 0;
}

bool palin(string x) {
    string X_reverso = x;
    reverse(X_reverso.begin(), X_reverso.end());
    return x == X_reverso;
}
