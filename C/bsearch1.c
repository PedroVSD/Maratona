//Refazer porque não está 100%

#include <stdio.h>

int busca_binaria(int **matriz, int n, int m, int flag);


int main(){

    int n = 5, m = 5, flag;
    int matriz[n][m];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d", &flag);

    int volta = busca_binaria(matriz, n, m, flag);

    if(volta != 1){
        printf("%d", volta);
    }else{
        printf("-1");
    }

    return 0;
}

int busca_binaria(int **matriz, int n, int m, int flag){
    int inicio = 0;
    int fim = n*2-1;
    int meio;

    while(inicio <= fim){
        meio = (inicio+fim)/2;

        int linha = meio/m;
        int coluna = meio%m;

        if(flag == matriz[linha][coluna]){
            return meio;
        }else if(flag < matriz[linha][coluna]){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }
    return -1;
}