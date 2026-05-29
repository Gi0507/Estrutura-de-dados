RA:2040482513020 Giovanne Crispim de Lima
#include <stdio.h>

int soma(int *a, int tamanho) {
    if (tamanho == 1) {
        printf("\nElemento: %d", *a);
        return *a;
    } else {
        int resultado = *a + soma(a + 1, tamanho - 1);
        printf("\nSoma parcial: %d", resultado);
        return resultado;
    }
}

int main() {

    int x[] = {10, 20, 30, 40, 50};
    int tamanho = 5;
    
    printf("\n\nSoma total = %d\n", soma(x, tamanho));
    return 0;
}