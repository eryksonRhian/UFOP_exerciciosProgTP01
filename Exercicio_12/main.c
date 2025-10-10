#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int placa;
    printf("Digite o número da placa de um veículo: ");
    while(placa < 1000 || placa > 9999){
        scanf("%i", &placa);
    }
    printf("A casa das dezenas é %i", ((placa / 10) % 10));
    return 0;
}
