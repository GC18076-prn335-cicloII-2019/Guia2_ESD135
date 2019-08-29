#include <stdio.h>

int main() {

    int filas, columnas, i, j;
    int tipo;
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

    printf("Desea sumar las filas o las columnas: \nIngrese 1 para sumar las filas \nIngrese 2 para sumar las columnas");
    scanf("%d", &tipo);

    if (tipo == 1){
        printf("Ingrese el numero de fila");
        scanf("%d", &tipo);
        for (i = 0; i < filas; ++i) {
            suma = suma + matriz[tipo][i];
        }
    } else {
        printf("Ingrese el numero de columna");
        scanf("%d", &tipo);
        for (i = 0; i < filas; ++i) {
            suma = suma + matriz[i][tipo];
        }
    }

    printf("la suma es: %d", suma);


    return 0;
}