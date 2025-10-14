#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    printf("Insira o valor do produto:\n");
    printf("%f", &preco);
    printf("O valor do produto com desconto de 9%% ficou %.2f R$", preco * 91/100);
    return 0;
}
