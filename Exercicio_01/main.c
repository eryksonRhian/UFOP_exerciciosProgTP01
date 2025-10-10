#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite o número escolhido:\n");
    scanf("%i", &num);
    printf("O número é %s!", ((num & 1) ? "Ímpar" : "Par"));
    return 0;
}
