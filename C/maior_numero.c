#include <stdio.h>

int main(){
    int n;
    int maior;

    printf("Quanto numeros para comparar?\n");
    scanf("%d", &n);

    int sequencia[n];

    for(int i = 0; i < n; i++){
        printf("posicao %d: ", i+1);
        scanf("%d", &sequencia[i]);

        if(i == 0){
            maior = sequencia[i];
        }

        if(sequencia[i] > maior){
            maior = sequencia[i];
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", sequencia[i]);
    }

    printf("\n%d: ", maior);

    return 0;
}