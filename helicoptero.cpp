//arrumar
# include<stdio.h>

int main(){

    int h, p ,f, d;
    scanf("%d %d %d %d", &h, &p, &f, &d);


    if(d == -1 && f > h && p > f || p < h){
        printf("S\n");
    } else if(d == 1 && f < h && p > f || p > h){
        printf("S\n");
    } else {
        printf("N\n");
        
    }

    return 0;
}
