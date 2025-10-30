#include <stdio.h>

int main()
{
    float altura, raio;
    printf("Digite o raio da lata");
    scanf("%f", &altura);
    printf("Digite a altura da lata");
    scanf("%f", &raio);
    printf("O volume total é %f", 3.14159*raio*raio*altura);
    return 0;
}
