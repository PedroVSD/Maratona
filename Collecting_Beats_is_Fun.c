#include <stdio.h>

int main(){

    int k;
    char tabuleiro[4][4];

    scanf("%d", &k);

    // Não entendi a parte do tempo

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf(" %c", &tabuleiro[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}