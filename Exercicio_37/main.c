#include <stdio.h>

int main()
{
    float salario, gasto;
    printf("Digite o valor do salario minimo");
    scanf("%f", &salario);
    printf("Digite o valor de Quilowatts gasta");
    scanf("%f", &gasto);
    printf("O valor do real por Quilowatt e %f R$\n", salario/7);
    printf("O valor total da conta e %f R$\n", salario/7*gasto);
    printf("Com desconto fica %f R$", salario/7*gasto*0.9);
    return 0;
}
