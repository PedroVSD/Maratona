#include <stdio.h>

int main(){

    int n, m ,k;

    scanf("%d %d %d", &n, &m, &k);

    int inteiros[n];
    int operacoes[m];
    int queries[k];

    for(int i = 0; i < n; i++){
        scanf("%d", &inteiros[i]);
    }

    return 0;
}