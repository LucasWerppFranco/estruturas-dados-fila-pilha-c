#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha p;
    inicializar(&p);

    push(&p, 10);
    push(&p, 20);
    push(&p, 30);

    printf("Topo da pilha: %d\n", top(&p));

    printf("Removendo: %d\n", pop(&p));
    printf("Novo topo: %d\n", top(&p));

    return 0;
}
