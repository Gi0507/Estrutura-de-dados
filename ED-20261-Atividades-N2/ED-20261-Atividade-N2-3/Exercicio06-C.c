RA:2040482513020 Giovanne Crispim de Lima
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
void relatorioNo(no *raiz, int valor) {
    if (raiz == NULL) {
        return;
    }
    if (raiz->valor == valor) {
        printf("Profundidade do no: %d\n", );
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
int main(){
    no *raiz = NULL;
    inserir(&raiz, 50);//
    inserir(&raiz, 30);//
    inserir(&raiz, 70);//
    inserir(&raiz, 20);
    inserir(&raiz, 40);
    inserir(&raiz, 60);
    inserir(&raiz, 80);
    inserir(&raiz, 10);
    inserir(&raiz, 25);
    inserir(&raiz, 45);
    inserir(&raiz, 65);

    relatorioNo(raiz,50);
    relatorioNo(raiz,30);
    relatorioNo(raiz,70);
    relatorioNo(raiz,10);
}