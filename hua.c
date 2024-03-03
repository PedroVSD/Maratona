//Refazer porque não está 100%
#include <stdio.h>
#include <string.h>


void risada(char risos[]);

int main(){

    char risos[50];

    scanf("%s", risos);

    risada(risos);

    return 0;
}

void risada(char risos[]){
    
    for(int i = 0; i < strlen(risos); i++){
        if (risos[i] == 'a' || risos[i] == 'e' || risos[i] == 'i' || risos[i] == 'o' || risos[i] == 'u') {
            
        }
    }
}