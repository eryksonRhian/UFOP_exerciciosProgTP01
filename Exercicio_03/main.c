#include <stdio.h>

int main(void)
{
    char nome[40], sexo;
    printf("Digite seu nome:\n");
    scanf(" %39s", nome);
    printf("Digite seu sexo: [M para Masculino F para Feminino]\n");
    while(sexo != 'M' && sexo != 'F'){
        scanf(" %c", &sexo);
    }
    printf("%s", (sexo == 'M') ? "lmo Sr.," : "lmo Sra.,");
    printf("\n%s", nome);
    return 0;
}
