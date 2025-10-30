#include <stdio.h>
#include <math.h>

int main()
{
    float C;
    int i,t;
    printf("Digite o valor inicial");
    scanf("%f", &C);
    printf("Digite a quantidade de tempo em meses de rendimento");
    scanf("%i", &t);
    printf("Digite o valor dos juros");
    scanf("%i", &i);
    printf("O valor final do investimento foi %f", pow((C*(1+i/100)),t));
    return 0;
}