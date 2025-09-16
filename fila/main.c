#include <stdio.h>
#include <string.h>
#define MAX 5

typedef struct {
  int senha;
  char nome[50];
} Paciente;

Paciente fila[MAX];
int inicio = 0, fim = -1, qtd = 0;

void enqueue(int senha, const char *nome) {
  if (qtd == MAX) {
    printf("Fila cheia!\n");
    return;
  }
  fim = (fim + 1) % MAX; 
  fila[fim].senha = senha;
  strcpy(fila[fim].nome, nome);
  qtd++; 
}

Paciente dequeue() {
  Paciente p = {-1, ""};
  if (qtd == 0) {
    printf("Fila vazia!\n");
    return p;
  }
  p = fila[inicio];            
  inicio = (inicio + 1) % MAX; 
  qtd--;                       
  return p;
}

void mostrarFila() {
  printf("Fila atual: ");
  for (int i = 0; i < qtd; i++) {
    int idx = (inicio + i) % MAX;
    printf("[%d - %s] ", fila[idx].senha, fila[idx].nome);
  }
  printf("\n");
}

int main() {

  enqueue(101, "Massayoshi");
  enqueue(101, "Alvez");
  enqueue(102, "Franco");
  enqueue(103, "Rezende");
  enqueue(104, "Marcelo");
  enqueue(105, "Ronaldo");
  mostrarFila();

  while (qtd > 0) {
    printf("\nAtendimento: %s (senha %d)\n", fila[inicio].nome, fila[inicio].senha);
    dequeue();
    mostrarFila();
  }
  return 0;

  printf("\nAtendimento: %s (senha %d)\n", fila[inicio].nome,
         fila[inicio].senha);
  dequeue();
  mostrarFila();

  return 0;
}