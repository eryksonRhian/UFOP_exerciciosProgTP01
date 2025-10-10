#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num, A, B;
    printf("Digite o número:\n");
    scanf("%f", &num);
    if(num > 0){
        A = num;
        printf("O número foi armazenado em A;");
    } else if(num < 0) {
        B = num;
        printf("O número foi armazenado em B;");
    } else {
        printf("O número é nulo, portanto não foi armazenado em A e/ou em B");
    }
    printf("\nValor de A: %.2f \nValor de B: %.2f", A, B);
    return 0;
}