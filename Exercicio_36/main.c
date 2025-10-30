#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v,t;
    printf("Digite o tempo gasto na viagem");
    scanf("%f", &t);
    printf("Digite a velocidade media");
    scanf("%f", &v);
    printf("A distancia percorrida foi: %f \nA quantidade de gasolina consumida foi: %f", v*t, v*t/12);
    return 0;
}
