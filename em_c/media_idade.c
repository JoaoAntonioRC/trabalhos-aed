#include <stdio.h>
void lerIdade(int idade[], int tamanho);
float somaIdade(int idade[], int tamanho);
float idadeMedia(int idade[], int tamanho);
void escreverResultado(float media);

int main(void)
{
  printf("\n\nIdade Media da Turma\n");

  const int tamanho = 5;
  int idade[tamanho];

  lerIdade(idade, tamanho);

  float media = idadeMedia(idade, tamanho);

  escreverResultado(media);
}

void lerIdade(int idade[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("\nIdade do %i.o aluno: ", i + 1);
    scanf("%i", &idade[i]);
  }
}

float somaIdade(int idade[], int tamanho)
{
  float soma = 0;

  for (int i = 0; i < tamanho; i++)
  {
    soma = soma + idade[i];
  }
  return soma;
}

float idadeMedia(int idade[], int tamanho)
{
  float media = somaIdade(idade, tamanho) / tamanho;
  return media;
}

void escreverResultado(float media)
{
  printf("\nIdade media da turma: %f", media);
}
