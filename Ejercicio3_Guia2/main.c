#include <stdio.h>

int main() {

    int filas, columnas, i, j;
    int suma = 0;

    printf("Ingrese el tamaño de matriz: ");
    printf("\n");
    printf("Filas: ");
    scanf("%d", &filas);

    printf("\n");
    printf("Columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];

    printf("\n");

    printf("LLene la matriz \n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Ingrese un numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }


    printf("\n");

    printf("Matriz");
    for (i = 0; i < filas; ++i) {
        printf("\n");
        for (j = 0; j < columnas; ++j) {
            printf("%d\t", matriz[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; ++j) {
            suma = suma + matriz[i][j];
        }
    }

    printf("\n");

    printf("La suma de todos los elementos es : %d", suma);

    return 0;
}