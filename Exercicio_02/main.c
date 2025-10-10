#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um valor na faixa de 1 a 9\n");
    scanf("%i", &num);
    printf("%s", ((num < 1 || num > 9) ? "O valor está fora da faixa permitida" : "O valor está na faixa permitida"));
    return 0;
}
