#include <stdio.h>

int main()
{
    float A,B;
    printf("Digite o valor de A");
    scanf("%f", &A);
    printf("Digite o valor de B");
    scanf("%f", &B);
    int temp = A;
    A = B; 
    B = A;
    printf("A = %f \nB = %f \n", A, B);
    return 0;
}
