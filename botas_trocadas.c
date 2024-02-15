#include <stdio.h>

int main(){

    int n;
    int conta = 0;
    scanf("%d", &n);

    int botas[n][2];

    for(int i = 0; i < n; i++){
        scanf("%d %c", &botas[i][0], &botas[i][1]);
        if(botas [i][0] == botas [i][0] && botas[i][1] == botas[i][1]){
            conta ++;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d %c\n", botas[i][0], botas[i][1]);
    }
    printf("%d", conta);

    return 0;
}