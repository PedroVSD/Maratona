//Refazer porque não está 100%
#include <stdio.h>

int main(){

    // 0 branco
    // 1 preto

    int n, m, tot = 0;

    scanf("%d %d", &n, &m);

    char retangulo[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf(" %c", &retangulo[i][j]);
            if(retangulo[i][j] == ' '){
                tot++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf(" %c", retangulo[i][j]);
        }
        printf("\n");
    }

    printf("%d", tot);

    return 0;
}