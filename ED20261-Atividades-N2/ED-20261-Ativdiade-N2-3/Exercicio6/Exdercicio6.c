#include <stdio.h>

typedef struct no {
    int valor;
    struct no *esquerda;
    struct no *direita;
} no;
int inserir(no **raiz, int valor) {
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

void imprimirAncestrais(no *raiz, int valor) {
    if (raiz == NULL) {
        return;
    }
    if (raiz->valor == valor) {
        return;
    }
    printf("%d ", raiz->valor);
    if (valor < raiz->valor) {
        imprimirAncestrais(raiz->esquerda, valor);
    } else {
        imprimirAncestrais(raiz->direita, valor);
    }
}
void imprimirDescendentes(no *raiz, int valor) {
    if (raiz == NULL) {
        return;
    }
    if (raiz->valor == valor) {
        imprimirDescendentes(raiz->esquerda, valor);
        imprimirDescendentes(raiz->direita, valor);
        return;
    }
    if (valor < raiz->valor) {
        imprimirDescendentes(raiz->esquerda, valor);
    } else {
        imprimirDescendentes(raiz->direita, valor);
    }
}
int contardescendentes(no *raiz, int valor) {
    if (raiz == NULL) {
        return 0;
    }
    if (raiz->valor == valor) {
        return 1 + contardescendentes(raiz->esquerda, valor) + contardescendentes(raiz->direita, valor);
    }
    if (valor < raiz->valor) {
        return contardescendentes(raiz->esquerda, valor);
    } else {
        return contardescendentes(raiz->direita, valor);
    }
}
void relatorioNo(no *raiz, int valor) {
    if (raiz == NULL) {
        return;
    }
    if (raiz->valor == valor) {
        printf("Valor do no: %d\n", raiz->valor);
        printf("Valor do pai: %d\n", raiz->valor);
        printf("Valor dos filhos: %d, %d\n", raiz->esquerda ? raiz->esquerda->valor : -1, raiz->direita ? raiz->direita->valor : -1);
        return;
    }
    if (valor < raiz->valor) {
        relatorioNo(raiz->esquerda, valor);
    } else {
        relatorioNo(raiz->direita, valor);
    }
}