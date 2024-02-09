#include<stdio.h>

int main(){
    int p, r;
    printf("Os valores de p e r deveram ser 1 ou 0 \n");

    printf("P\n");
    scanf("%d", &p);
    printf("R\n");
    scanf("%d", &r);

    if(p==1 && r==1){
        printf("A");
    }
    if(p==1 && r==0){
        printf("B");
    }
    if(p==0){
        printf("C");
    }

    return 0;
}