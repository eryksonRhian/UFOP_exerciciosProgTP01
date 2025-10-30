#include <stdio.h>

int main()
{
    int hora, minuto;
    char pon;

    printf("Digite um horário no formato HH:MM");
    scanf("%i%c%i", &hora, &pon, &minuto);
    while((hora >23) || (pon != ':' ) || (minuto > 59)){
        printf("Horário Inválido, digite novamente: (Lembrando do formato HH:MM)");
        scanf("%i%c%i", &hora, &pon, &minuto);
    }
    printf("Se passaram %i horas e %i minutos", hora, minuto);
    return 0;
}