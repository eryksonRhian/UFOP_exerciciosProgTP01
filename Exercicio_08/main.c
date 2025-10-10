#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float ak, r;
    int termo, indice;
    printf("Qual o termo conhecido da P.A?");
    scanf("%f", &ak);
    printf("Qual o índice desse termo na P.A?");
    scanf("%i", &indice);
    printf("Qual a razão da P.A?");
    scanf("%f", &r);
    printf("Qual termo deseja encontrar?");
    scanf("%i", &termo);
    printf("O %io termo da P.A é %.2f", termo, (ak + (termo - indice) * r ));
}