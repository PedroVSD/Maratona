#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int MDC(int X, int Y);

int main(){
    int Y, K;
    int X = 1;

    cin >> Y >> K;

    unordered_map<int ,int> calculados;

    //Com o jeito abaixo não foi, deu limite de tempo, tentar otimizar, quem sabe com hashmap, algo aprecido com two sums e ver os valores que já foram calculados e mudar a recursão do MDC para iteração.

    /*for(int i = 0; i < K; i++){
        int divisor = MDC(X, Y);
        X += divisor;
        
    }*/

    vector<int> valores_x;
    vector<int> valores_MDC;

    while(K > 0){
        if(calculados.count(X)){
            int calculado_inicio = calculados[X];
            int calculado_fim = valores_x.size() - calculado_inicio;

            int move_calculo = 0;
            for(int i = calculado_inicio; i < valores_x.size(); i++){
                move_calculo += valores_MDC[i];
            }

            int ciclos = K / calculado_fim;
            X += move_calculo * ciclos;
            K %= calculado_fim;
        }

        calculados[X] = valores_x.size();
        int valor = MDC(X, Y);
        valores_x.push_back(X);
        valores_MDC.push_back(valor);

        X += valor;
        K--;
    }

    cout << X << endl;

    return 0;
}

int MDC(int X, int Y){
    while(Y != 0){
        int aux = X % Y;
        X = Y;
        Y = aux;
    }
    return X;
}