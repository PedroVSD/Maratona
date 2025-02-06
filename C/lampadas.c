#include <stdio.h>

int main(){
    
    int n;

    scanf("%d", &n);

    int lampadaA = 0;
    int lampadaB = 0;

    int inter;

    for(int i = 0; i < n; i++){
        scanf("%d", &inter);
        
        if(inter == 1){
            lampadaA = !lampadaA;
        }
        if(inter == 2){
            lampadaA = !lampadaA;
            lampadaB = !lampadaB;
        }
    }

    printf("%d\n", lampadaA);
    printf("%d\n", lampadaB);

    return 0;
}