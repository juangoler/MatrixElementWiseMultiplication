#include <stdio.h>

int main() {
    int matriz[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            matriz[i][j] *= 6;
        }
    }

    printf("\nMatriz após multiplicação por 6:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
