// Melakukan konversi bilangan desimal terhadap sistem bilangan heksadesimal, okta, dan binary

#include "./Sistem/Sistem.h"
#include <stdio.h>

int main () {

    long long bilangan;     // Range bilangan long long : -9223372036854775808 hingga 9223372036854775807
    char key;
    printf("Bilangan Desimal : ");
    scanf("%lld", &bilangan);

    printf("\nKetik B untuk konversi ke binary\n");
    printf("Ketik H untuk konversi ke heksadesimal\n");
    printf("Ketik O untuk konversi ke oktal\n");
    
    scanf(" %c", &key);

    if (key == 'B') {
        printf("Dalam sistem bilangan Binary: ");
        konversi_binary(bilangan);
    } else if (key == 'H') {
        konversi_heksa(bilangan);
    } else if (key == 'O') {
        konversi_oktal(bilangan);
    } else {
        printf("INVALID COMMAND");
    }
    
    return 0;
}