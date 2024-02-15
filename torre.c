#include <stdio.h>
#include <stdbool.h>

int peso(int tabuleiro[][m], int m);

int main(){

    int m;

    scanf("%d", &m);
    int tabuleiro[m][m];

    for(int i = 0; i < m; i++){
        for(int j =0; j < m; j++){
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    int torre = peso(tabuleiro, m);

    print("%d", torre);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int peso(int tabuleiro[][m], int m){
    int maior = 0;
}