#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, P, I;
    printf("Digite o número escolhido:\n");
    scanf("%i", &num);
    if(num & 1){
        I = num;
    } else {
        P = num;
    }
    printf("Valor de P: %i \nValor de I: %i", P, I);
    return 0;
}
