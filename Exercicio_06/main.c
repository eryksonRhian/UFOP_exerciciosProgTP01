#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a1, r;
    int termo;
    printf("Qual o primeiro termo da P.A?");
    scanf("%f", &a1);
    printf("Qual a razão da P.A?");
    scanf("%f", &r);
    printf("Qual termo deseja encontrar?");
    scanf("%i", &termo);
    printf("O %io termo da P.A é %.2f", termo, (a1 + (termo-1)*r));
}
