#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, C;
    printf("Digite o termo A:\n");
    scanf("%f", &A);
    printf("Digite o termo C:\n");
    scanf("%f", &C);
    printf("O termo médio(B) é %f", sqrt(A*C));
    return 0;
}
