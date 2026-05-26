#include <stdio.h> 

void troca(int *a, int *b) {

    printf("\nValor de a: %d\nEndereco de a: %p\n", *a, a);
    printf("\nValor de b: %d\nEndereco de b: %p\n", *b, b);
    printf("\n\n%d + %d = %d\n", *a, *b, *a + *b    );
    *a = *a+*b;
    printf("\nValor de a: %d\nEndereco de a: %p\n", *a, a);
    printf("\nValor de b: %d\nEndereco de b: %p\n", *b, b);

    printf("\n\n%d - %d = %d\n", *a, *b, *a - *b    );
    *b = *a-*b;
    printf("\nValor de b: %d\nEndereco de b: %p\n", *b, b);
    printf("\nValor de a: %d\nEndereco de a: %p\n", *a, a);

    printf("\n\n%d - %d = %d\n", *a, *b, *a - *b    );
    *a = *a-*b;
    printf("\nValor de a: %d\nEndereco de a: %p\n", *a, a);
    printf("\nValor de b: %d\nEndereco de b: %p\n", *b, b);
}
int main() {
    int x = 5, y = 10;
    printf("\nValor de x: %d\nEndereco de x: %p\n", x, &x);
    printf("\nValor de y: %d\nEndereco de y: %p\n", y, &y);
    troca(&x, &y);
    return 0;
}