#include <stdio.h>

int soma_linha(int quadro[][3]);
int soma_coluna(int quadro[][3]);
int soma_diagonal(int quadro[][3]);

int main(){

    //int linha, coluna;
    //scanf("%d", &linha);
    //scanf("%d", &coluna);

    int quadro[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &quadro[i][j]);
        }
    }

    int resultado_linha = soma_linha(quadro);
    int resultado_coluna = soma_coluna(quadro);
    int resultado_diagonal = soma_diagonal(quadro);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", quadro[i][j]);
        }
        printf("\n");
    }

    printf("%d", resultado_linha);
    printf("\n");
    printf("%d", resultado_coluna);
    printf("\n");
    printf("%d", resultado_diagonal);

    return 0;
}

int soma_linha(int quadro[][3]){
    
    for(int i = 0; i < 3; i++){
        int resultado = 0;
        for(int j = 0; j < 3; j++){
            resultado += quadro[i][j];
        }
        if(resultado != 15){
            return 0;
        }
    }
    return 1;
}

int soma_coluna(int quadro[][3]){

    for(int i = 0; i < 3; i++){
        int resultado = 0;
        for(int j = 0; j < 3; j++){
            resultado += quadro[i][j];
        }

        if(resultado != 15){
            return 0;
        }
    }
    return 1;
}

int soma_diagonal(int quadro[][3]){
    
    for(int i = 0; i < 3; i++){
        int resultado = 0;
        for(int j = 0; j < 3; j++){
            if(i==j){
                resultado += quadro[i][j];
            }
        }
        if(resultado != 15){
            return 0;
        }
    }
    return 1;
}