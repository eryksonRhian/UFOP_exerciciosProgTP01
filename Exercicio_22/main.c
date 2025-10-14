#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, C;
    printf("Digite o termo A:\n");
    scanf("%f", &A);
    printf("Digite o termo C:\n");
    scanf("%f", &C);
    printf("O termo médio(B) é %f", ((A+C)/2));
    return 0;
}
