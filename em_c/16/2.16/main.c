#include <stdio.h>
int numZeros(float num[], int tamanho)
{
    int n = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (num[i] == 0)
        {
            n++;
        }
    }
    return n;
}
void lerReal(float num[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nDigite um numero real: ");
        scanf("%i", &num[i]);
    }
}
int main()
{
    float VETOR1[] = {1.5, 9.6, 0.0, 3.8};
    float VETOR2[] = {0.0, 0.0, 0.0};
    float VETOR3[] = {3.7, 2.2};
    float VETOR4[5];
    lerReal(VETOR4, 5);

    int x = numZeros(VETOR1, 4);
    int y = numZeros(VETOR2, 3);
    int z = numZeros(VETOR3, 2);
    int h = numZeros(VETOR4, 5);
    printf("\nNumeros de 0 vetor 1 : %i", x);
    printf("\nNumeros de 0 vetor 2 : %i", y);
    printf("\nNumeros de 0 vetor 3 : %i", z);
    printf("\nNumeros de 0 vetor 4 : %i", h);

    return 0;
}