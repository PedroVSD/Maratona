//Refazer porque não está 100%
#include <stdio.h>

int main() {
    int n; // Número de tipos diferentes de pebbles
    int k; // Número que Anastasia pode colocar em um bolso
    int w; // Número de pebbles de cada tipo
    int dias = 0;
    int tot = 0; // Inicialize tot como zero

    scanf("%d %d %d", &n, &k, &w);

    int qnt[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &qnt[i]);
    }

    for (int i = 0; i < w; i++) {
        tot += qnt[i];
    }

    while (tot <= k * w) {
        dias++;
        tot += qnt[dias + w - 1] - qnt[dias - 1];
    }

    printf("%d", dias);

    return 0;
}
