#ifndef PILHA_H
#define PILHA_H

#define MAX 100

typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

void inicializar(Pilha *p);
int push(Pilha *p, int valor);
int pop(Pilha *p);
int top(Pilha *p);
int estaVazia(Pilha *p);

#endif
