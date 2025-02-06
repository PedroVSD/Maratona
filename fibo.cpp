#include <stdio.h>

int main(){

    int fib = 0;
    int fib0 = 0;
    int fib1 = 1;

    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(i == 0){
            printf("%d", fib0);
        }else if(i == 1){
            printf(" %d", fib1);
        }else{
            fib = fib0 + fib1;
            printf(" %d", fib);
            fib0 = fib1;
            fib1 = fib;
        }
    }
    printf(" %d", fib);
    return 0;
}