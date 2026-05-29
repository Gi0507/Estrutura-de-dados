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
int profundidade(no *raiz,int valor,int profundidade) {
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
int main(){

}