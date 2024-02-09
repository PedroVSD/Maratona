#include <stdio.h>

int soma(int n1, int n2);

int main(){
    int a, b;
    int res = soma(a, b);
    printf("%d", res);
    return 0;
}

int soma(int n1, int n2){
    scanf("%d", &n1);
    scanf("%d", &n2);
    return n1+n2;
}
