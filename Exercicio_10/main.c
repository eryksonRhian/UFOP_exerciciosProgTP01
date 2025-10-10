#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double a1, q;
    int termo;
    printf("Qual o primeiro termo da P.G? ");
    scanf("%lf", &a1);
    printf("Qual a razao da P.G? ");
    scanf("%lf", &q);
    printf("Qual termo deseja encontrar? ");
    scanf("%d", &termo);
    printf("O %do termo da P.G eh %.2lf", termo, (a1 * pow(q, termo - 1)));
    return 0;
}