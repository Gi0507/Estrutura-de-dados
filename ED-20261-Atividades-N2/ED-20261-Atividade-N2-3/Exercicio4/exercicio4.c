RA:2040482513020 Giovanne Crispim de Lima
#include <stdio.h>

void buscabinariarecursiva(int *vetor, int inicio, int fim, int chave) {
    if (inicio > fim) {
        printf("Elemento nao encontrado\n");
        return;
    }
    int meio = (inicio + fim) / 2;
    if (*(vetor + meio) == chave) {
        printf("Elemento encontrado no indice: %d\n", meio);
        return;
    }
    if (*(vetor + meio) > chave) {
        buscabinariarecursiva(vetor, inicio, meio - 1, chave);
    } else {
        buscabinariarecursiva(vetor, meio + 1, fim, chave);
    }
}

long long potenciarapida(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }else
    base *= potenciarapida(base, expoente - 1);
    return base;    
}