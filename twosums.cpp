#include <stdio.h>
#include <stdlib.h>

int* somadois(int *v, int n, int x) {
    int i, j;
    int *res = (int*)malloc(2 * sizeof(int));
    if (res == NULL) {
        return NULL;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (v[i] + v[j] == x) {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    
    free(res);
    return NULL;
}

int main() {
    int v[] = {2, 7, 11, 15};
    int n = 4;
    int x = 9;
    int *posicoes = somadois(v, n, x);

    if (posicoes != NULL) {
        printf("Soma encontrada nas posições: %d e %d\n", posicoes[0], posicoes[1]);
        printf("Soma encontrada: %d + %d = %d\n", v[posicoes[0]], v[posicoes[1]], x);
        free(posicoes);
    } else {
        printf("Soma nao encontrada\n");
    }
    
    return 0;
}
