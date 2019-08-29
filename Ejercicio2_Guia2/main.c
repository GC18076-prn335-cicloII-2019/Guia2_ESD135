#include <stdio.h>

int main() {

    int filas, columnas, i, j;

    printf("Ingrese el tamaño de las matrizes: ");
    printf("\n");
    printf("Filas: ");
    scanf("%d", &filas);

    printf("\n");
    printf("Columnas: ");
    scanf("%d", &columnas);

    int matrizA[filas][columnas];
    int matrizB[filas][columnas];
    int matrizC[filas][columnas];

    printf("\n");

    printf("LLene la matriz A \n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &matrizA[i][j]);
        }
    }


    printf("LLene la matriz B \n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\n");

    printf("Matriz A");
    for (i = 0; i < filas; ++i) {
        printf("\n");
        for (j = 0; j < columnas; ++j) {
            printf("%d\t", matrizA[i][j]);
        }
    }

    printf("\n");

    printf("Matriz B");
    for (i = 0; i < filas; ++i) {
        printf("\n");
        for (j = 0; j < columnas; ++j) {
            printf("%d\t", matrizB[i][j]);
        }
    }

    printf("\n");

    for (i  = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz resultante: Matriz A + Matriz B");
    for (i = 0; i < filas; ++i) {
        printf("\n");
        for (j = 0; j < columnas; ++j) {
            printf("%d\t", matrizC[i][j]);
        }
    }

    printf("\n");

    return 0;
}