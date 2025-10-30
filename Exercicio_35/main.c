#include <stdio.h>

int main()
{
    float sal,min;
    printf("Digite o salario minimo");
    scanf("%f", &min);
    printf("Digite o seu salario");
    scanf("%f", &sal);
    printf("Voce ganha %f vezes mais que o salario minimo", (sal/min));
    return 0;
}
