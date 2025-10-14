#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    float a1, q;
    printf("Quantos termos tem a P.G?\n");
    scanf("%i", &N);
    printf("Qual o primeiro termo?\n");
    scanf("%f", &a1);
    printf("Qual a razão da P.G?\n");
    scanf("%f", &q);
    printf("O produto da P.G é %f", (pow(a1,N) * pow(q,(N*(N-1)/2))));
    return 0;
}
