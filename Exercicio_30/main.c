#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,den;
    printf("Digite o numerador");
    scanf("%i", &num);
    printf("Digite o denominador");
    scanf("%i", &den);
    printf("%f", num/(float)den);
    return 0;
}
