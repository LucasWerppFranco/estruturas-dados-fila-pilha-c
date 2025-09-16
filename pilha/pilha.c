#include "pilha.h"
#include <stdio.h>

void inicializar(Pilha *p) {
    p->topo = -1;
}

int push(Pilha *p, int valor) {
    if (p->topo == MAX - 1) {
        printf("Erro: pilha cheia!\n");
        return 0;
    }
    p->dados[++(p->topo)] = valor;
    return 1;
}

int pop(Pilha *p) {
    if (p->topo == -1) {
        printf("Erro: pilha vazia!\n");
        return -1;
    }
    return p->dados[(p->topo)--];
}

int top(Pilha *p) {
    if (p->topo == -1) {
        printf("Erro: pilha vazia!\n");
        return -1;
    }
    return p->dados[p->topo];
}

int estaVazia(Pilha *p) {
    return p->topo == -1;
}
