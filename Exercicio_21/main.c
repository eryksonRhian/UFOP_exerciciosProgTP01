#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float a1, aN;
    printf("Quantos termos tem a P.A?\n");
    scanf("%i", &N);
    printf("Qual o primeiro termo?\n");
    scanf("%f", &a1);
    printf("Qual o último termo?\n");
    scanf("%f", &aN);
    printf("A soma da P.A é %f", ((a1+aN) * N / 2));
    return 0;
}
