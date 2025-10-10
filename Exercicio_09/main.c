#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double ak, q;
    int termo, indice;
    printf("Qual o termo conhecido da P.G? ");
    scanf("%lf", &ak);
    printf("Qual o índice desse termo na P.G?");
    scanf("%i", &indice);
    printf("Qual a razao da P.G? ");
    scanf("%lf", &q);
    printf("Qual termo deseja encontrar? ");
    scanf("%d", &termo);
    printf("O %do termo da P.G eh %.2lf", termo, (ak * pow(q, termo - indice)));
    return 0;
}
