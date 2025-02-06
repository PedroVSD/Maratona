#include <stdio.h>

int ordem(int *vetor, int n);

int main(){

    int n;
    scanf("%d", &n);

    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    int ordenado = ordem(vetor, n);

    return 0;
}

int ordem(int *vetor, int n){

    int aux;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

}