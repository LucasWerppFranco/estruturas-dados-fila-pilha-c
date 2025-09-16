#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha p;
    inicializar(&p);

    printf("Simulação de desfazer ações usando pilha\n");

    // Simulando ações
    printf("Executando ação 1\n");
    push(&p, 1);

    printf("Executando ação 2\n");
    push(&p, 2);

    printf("Executando ação 3\n");
    push(&p, 3);

    printf("Estado atual da pilha (topo): %d\n", top(&p));

    // Desfazendo ações
    printf("Desfazendo última ação: %d\n", pop(&p));
    printf("Topo após desfazer: %d\n", top(&p));

    printf("Desfazendo última ação: %d\n", pop(&p));
    printf("Topo após desfazer: %d\n", top(&p));

    printf("Desfazendo última ação: %d\n", pop(&p));

    // Tentativa de desfazer quando pilha está vazia
    printf("Tentando desfazer com pilha vazia:\n");
    pop(&p);

    return 0;
}

