#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta;
    printf("Valor total da conta");
    scanf("%f", &conta);
    printf("Valor da Gorjeta: %f \nValor total com a gorjeta: %f", conta*0.1, conta*1.1);
    return 0;
}
