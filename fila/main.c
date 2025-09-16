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
  printf("=== Caso de Teste 1: Inserção até encher ===\n");

  enqueue(101, "Ana");
  enqueue(102, "Bruno");
  enqueue(103, "Carlos");
  enqueue(104, "Daniela");
  enqueue(105, "Eduardo");  // Último espaço válido
  enqueue(106, "Fernanda"); // Deve exibir "Fila cheia!"

  mostrarFila();

  printf("\n=== Caso de Teste 2: Remoção até esvaziar ===\n");
  while (qtd > 0) {
    Paciente p = dequeue();
    printf("Atendido: %s (senha %d)\n", p.nome, p.senha);
    mostrarFila();
  }

  // Tentativa de remover de uma fila já vazia
  dequeue();

  return 0;
}
