#include <stdio.h>

int main() {
    int n, num, soma = 0;
    scanf("%d", &n);



    for(int i = 0; i < n; i++){

        scanf("%d", &num);

        int num1 = num/10;
        int num2 = num%10;
        soma = num1+num2;
        printf("%d\n", soma);
    }

    return 0;
}
