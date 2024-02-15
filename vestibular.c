#include <stdio.h>

int main(){

    int n, acerto = 0;
    scanf("%d", &n);

    char gaba[n];
    char resposta[n];


    for(int j = 0; j < n; j++){
        scanf(" %c", &gaba[j]);
    }

    for(int i = 0; i < n; i++){
        scanf(" %c", &resposta[i]);
    }

    for(int k = 0; k < n; k++){
        if(gaba[k] == resposta[k]){
            acerto++;
        }
    }

    printf("%d", acerto);

    return 0;
}