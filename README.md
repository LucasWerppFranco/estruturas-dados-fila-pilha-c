# estruturas-dados-fila-pilha-c

´´´
          ___   ____
        /' --;^/ ,-_\     \ | /
       / / --o\ o-\ \\   --(_)--
      /-/-/|o|-|\-\\|\\   / | \
       '`  ` |-|   `` '
             |-|
             |-|O
             |-(\,__
          ...|-|\--,\_....
      ,;;;;;;;;;;;;;;;;;;;;;;;;,.
~~,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;,  ______   ---------   _____     ------
´´´

Este projeto apresenta implementações básicas de estruturas de dados fundamentais: **Fila Circular** e **Pilha**, ambas em linguagem C. Além das implementações, o projeto inclui exemplos de uso e testes para facilitar o entendimento e validação das funcionalidades.


---


## Estrutura do Projeto


- **fila/**  

  Contém a implementação de uma fila circular de pacientes, com operações de inserção (enqueue), remoção (dequeue) e exibição da fila.


- **pilha/**  

  Contém a implementação da pilha com operações básicas (push, pop, top, verificar se está vazia) e testes que simulam operações de desfazer ações.


---


## Implementações


### Fila Circular de Pacientes


- Cada paciente possui uma senha (identificador numérico) e um nome.

- A fila tem tamanho máximo fixo (definido por `MAX`).

- Operações:

  - `enqueue`: adiciona paciente no final da fila.

  - `dequeue`: remove paciente do início da fila.

  - `mostrarFila`: exibe o estado atual da fila.

- Tratamento de fila cheia e fila vazia com mensagens apropriadas.


### Pilha


- Pilha de inteiros com tamanho máximo definido por `MAX`.

- Operações:

  - `inicializar`: prepara a pilha para uso.

  - `push`: adiciona elemento no topo da pilha.

  - `pop`: remove e retorna o elemento do topo.

  - `top`: retorna o elemento do topo sem remover.

  - `estaVazia`: verifica se a pilha está vazia.

- Testes simulam uma funcionalidade de desfazer ações, demonstrando o uso prático da pilha.


---


## Como Compilar e Executar


### Requisitos


- Compilador C (ex: gcc)

- Terminal ou prompt de comando


### Fila


Para compilar e executar o programa da fila:


```bash

gcc fila/main.c -o fila

./fila
