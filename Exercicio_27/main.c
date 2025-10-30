#include <stdio.h>

int main()
{
    float C;
    printf("Escreva a temperatura em graus Celsius");
    scanf("%f", &C);
    printf("A temperatura convertida em Fahrenheint e de %f F", (9*C+160)/5);
    return 0;
}
