
#include <stdio.h>
void lerIdade(int idade[], int TAMANHO);
float somaIdade(int idade[], int TAMANHO);
float idadeMedia(int idade[], int TAMANHO);
void escreverResultado(int acima);
int qtAcimaIdadeMedia(int idade[], int media);
const int TAMANHO = 10;
int main(void)
{
    printf("\n\nIdade Media da Turma\n");

    int IDADE[TAMANHO];

    lerIdade(IDADE, TAMANHO);

    float media = idadeMedia(IDADE, TAMANHO);

    int ACIMA = qtAcimaIdadeMedia(IDADE, media);

    escreverResultado(ACIMA);
}

void lerIdade(int idade[], int TAMANHO)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("\nIdade do %i.o aluno: ", i + 1);
        scanf("%i", &idade[i]);
    }
}

float somaIdade(int idade[], int TAMANHO)
{
    float soma = 0;

    for (int i = 0; i < TAMANHO; i++)
    {
        soma = soma + idade[i];
    }
    return soma;
}

float idadeMedia(int idade[], int TAMANHO)
{
    float media = somaIdade(idade, TAMANHO) / TAMANHO;
    return media;
}

int qtAcimaIdadeMedia(int idade[], int media)
{
    int acimaMedia = 0;
    for (int i = 0; i < TAMANHO; i++)
    {
        if (idade[i] >= media)
        {
            acimaMedia = acimaMedia + 1;
        }
    }
    return acimaMedia;
}

void escreverResultado(int acima)
{
    printf("\nNumero de alunos com idade maior ou igual a media da turma: %i", acima);
}