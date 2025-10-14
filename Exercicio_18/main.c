#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("Digite um número real qualquer:\n");
    scanf("%f", &num);
    printf("A terça parte desse número é: %f", (num/3));
    return 0;
}