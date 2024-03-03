//Refazer porque não está 100%
#include <stdio.h>

int main(){

    int pista[15];
    int heli, fugi, poli, dire;

    scanf("%d", &heli);
    pista[heli] = heli;

    scanf("%d", &poli);
    pista[poli] = poli;

    scanf("%d", &fugi);
    pista[fugi] = fugi;
    
    scanf("%d", &dire);

    
    //-1 para horário e 1 para anti-horário

    if(dire == 1){
        if(pista[fugi] < pista[heli] && pista[poli] > pista[fugi]|| pista[poli] > pista[heli]){
            printf("N");
        }else{
            printf("S");
        }
    }

    if(dire == -1){
        if(pista[fugi] > pista[heli] && pista[poli] > pista[fugi] || pista[poli] < pista[heli]){
            printf("S");
        }else{
            printf("N");
        }
    }


    return 0;
}