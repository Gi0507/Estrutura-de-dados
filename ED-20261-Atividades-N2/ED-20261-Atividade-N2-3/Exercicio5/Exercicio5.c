RA:2040482513020 Giovanne Crispim de Lima
#include <stdio.h>

typedef struct no {
    int valor;
    struct no *esquerda;
    struct no *direita;
} no;

void inserir(no **raiz, int valor) {
    if (*raiz == NULL) {
        *raiz = (no *)malloc(sizeof(no));
        (*raiz)->valor = valor;
        (*raiz)->esquerda = NULL;
        (*raiz)->direita = NULL;
    } else if (valor < (*raiz)->valor) {
        inserir(&(*raiz)->esquerda, valor);
    } else {
        inserir(&(*raiz)->direita, valor);
    }
}
int altura(no *raiz) {
    if (raiz == NULL) {
        return -1;
    }
    int alturaEsquerda = altura(raiz->esquerda);
    int alturaDireita = altura(raiz->direita);
    return (alturaEsquerda > alturaDireita ? alturaEsquerda : alturaDireita) + 1;
}
int profundidade(no *raiz) {
    if (raiz == NULL) {
        return -1;
    }
    int profundidadeEsquerda = profundidade(raiz->esquerda);
    int profundidadeDireita = profundidade(raiz->direita);
    return (profundidadeEsquerda > profundidadeDireita ? profundidadeEsquerda : profundidadeDireita) + 1;
}
int grau(no *raiz) {
    if (raiz == NULL) {
        return -1;
    }
    int grauEsquerda = grau(raiz->esquerda);
    int grauDireita = grau(raiz->direita);
    return (grauEsquerda > grauDireita ? grauEsquerda : grauDireita) + 1;
}
int alturatotal(no *raiz) {
    if (raiz == NULL) {
        return -1;
    }
    int alturaEsquerda = alturatotal(raiz->esquerda);
    int alturaDireita = alturatotal(raiz->direita);
    return (alturaEsquerda > alturaDireita ? alturaEsquerda : alturaDireita) + 1;
}
int main() {
    no *raiz = NULL;
    inserir(&raiz, 5);
    inserir(&raiz, 3);
    inserir(&raiz, 7);
    inserir(&raiz, 2);
    inserir(&raiz, 4);
    inserir(&raiz, 6);
    inserir(&raiz, 8);
    printf("Altura da arvore: %d\n", altura(raiz));
    printf("Profundidade da arvore: %d\n", profundidade(raiz));
    printf("Grau da arvore: %d\n", grau(raiz));
    printf("Altura total da arvore: %d\n", alturatotal(raiz));
    printf("Arvore em ordem: ");
    mostrar_arvore(raiz);
    printf("\n");
    return 0;
}