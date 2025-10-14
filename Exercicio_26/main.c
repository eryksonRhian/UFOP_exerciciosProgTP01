#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numAulas, descontoINSS;
    float valor;
    printf("DIgite o valor da hora/aula:\n");
    scanf("%f", &valor);
    printf("DIgite o número de aulas dadas no mês:\n");
    scanf("%i", &numAulas);
    printf("DIgite o percentual de desconto do INSS:\n");
    scanf("%i", &descontoINSS);
    printf("O valor do salário líquido é de %f R$", valor*numAulas*(100-descontoINSS)/100);
    return 0;
}
