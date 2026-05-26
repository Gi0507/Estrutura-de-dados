#include <stdio.h>

float calcularMedia(float *notas, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += *(notas + i)    ;
    }
    return soma / n;
}
void acharextremos(float *notas, int n, float *min, float *max) {
    *min = *max = *(notas + 0);
    for (int i = 1; i < n; i++) {
        if (*(notas + i) < *min) {
            *min = *(notas + i);
        }
        if (*(notas + i) > *max) {
            *max = *(notas + i);
        }
    }
    printf("Valor minimo: %f\nValor maximo: %f\n", *min, *max);
}
void normalizar(float *notas, int n) {
    float max;
    for (int i = 0; i < n; i++) {
        if (*(notas + i) > max) {
            max = *(notas + i);
        }
    }
    for (int i = 0; i < n; i++) {
        *(notas + i) = (*(notas + i) - min) / (max - min);
        printf("Nota normalizada: %f\n", *(notas + i));
    }
}
void imprimirNotas(float *notas, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nota %d: %f\n", i + 1, *(notas + i));
    }
}
int main() {
    int n = 6;
    float notas[n]=[
        7.5, 3.2, 9.8,
        6.0, 5.5, 8.1];
    float min, max;
    imprimirNotas(notas, n);
    acharextremos(notas, n, &min, &max);
    normalizar(notas, n);
    imprimirNotas(notas, n);
    return 0;
}