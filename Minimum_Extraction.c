#include <stdio.h>

void ordenar(int *vetor, int tam);
void retirar_e_somar(int *vetor, int tam);

int main(){

    int tamanho;

    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    ordenar(vetor, tamanho);
    printf("\n\n");
    retirar_e_somar(vetor, tamanho);

    return 0;
}

void ordenar(int *vetor, int tam){
    int aux;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam-1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for(int i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }

}

void retirar_e_somar(int *vetor, int tam){

    int menor = vetor[0];

    for(int i = 0; i < tam; i++){
        vetor[i] = vetor[i]+menor;
    }

    for(int i = 0; i < (tam - 1); i++){
        vetor[i] = vetor[i+1];
    }

    for(int k = 0; k < tam-1; k++){
        printf("%d ", vetor[k]);
    }
}