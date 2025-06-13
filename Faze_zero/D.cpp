#include <iostream>
#include <string>

using namespace std;

int main(){

    //taxa = qnt qubits colapso/ qnt qubits superposiçao T/S
    int N;
    cin >> N;
    string S/*Denominador*/, T/*Numerador*/;
    float saida;
    int baixo = 0;
    int cima = 0;

    cin >> S >> T;

    for(int i = 0; i < N; i++){
        if(S[i] == '*'){
            baixo++;
        }
        if(T[i] == '*'){
            cima++;
        }
    }

    //cout << cima << baixo;
    //saida = 1 - (cima/baixo);
    saida = 1 - static_cast<float>(cima) / baixo;
    printf("%.2f", saida);

    return 0;
}