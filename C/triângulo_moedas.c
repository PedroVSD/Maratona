#include <stdio.h>

int main(){

    int n, topo = 1;

    scanf("%d", &n);

    while ((topo*(topo+1)/2) <= n){
       topo++;
    }

    printf("%d", topo-1);
    

    return 0;
}