#include <stdio.h>

int hanoi(int n, char origem, char destino, char auxiliar) {
    printf("n: %d\n",n);
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return 0;
    }
    hanoi(n - 1, origem, auxiliar, destino);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    hanoi(n - 1, auxiliar, destino, origem);
    return 0;
}
int main(void)
{
    hanoi(6, 'A', 'C', 'B');
    return 0;
}
