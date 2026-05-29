RA:2040482513020 Giovanne Crispim de Lima

#include <stdio.h>

int hanoi(int n, char origem, char destino, char auxiliar, int *contador) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        contador[n]++;
        return 0;
    }
    hanoi(n - 1, origem, auxiliar, destino,contador);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    hanoi(n - 1, auxiliar, destino, origem,contador);
    contador[n]++;
    return 0;
    }
int main(void)
{
    int contador[7]={0};
    hanoi(6, 'A', 'C', 'B',contador);
     printf("\n------------------"
        "\n     contagem     "
        "\n------------------");
    for(int n=1;n<7;n++){
        printf("\nDisco %d:      %d",n,*(contador+n));
    }
    return 0;
}
