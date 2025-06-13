#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    // N -> filtros, K -> fase
    // Deixam passar particulas com fase menor ou igual ao limite Ai
    // eu tempo limite, tentar otimizar

    int N, K;
    cin >> N >> K;

    vector<int> nums(N);
    vector<int> foi(N);

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    for(int i = 0; i < N; i++){
        int particula_fase = nums[i];
        
        int filtro = i;
        int esquerda = 1, direita = N;

        //int filtro = (i%N)+1-i; 
        //bool testando = true;

        while(esquerda <= direita){
            int meio = (esquerda+direita)/2;
            int fase_nova = particula_fase + K *meio;
            //if(particula_fase > nums[filtro]){
                //foi[i] = filtro + 1;
                //break;
                if(fase_nova > ){
                    
                }
            }
        particula_fase += K;
        //Filtro aqui em baixo para contar
        filtro = (filtro+1)%N;
        }    
    }
    
    for (int i = 0; i < N; i++) {
        cout << foi[i] << " ";
    }

    return 0;
}

