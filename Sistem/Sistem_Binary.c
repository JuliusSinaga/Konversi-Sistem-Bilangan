#include "Sistem.h"
#include <stdio.h>
#include <string.h>

void konversi_binary(long long _bilangan) {
    if ( _bilangan / 2 != 0 ) {
        konversi_binary(_bilangan / 2);
    }
    printf("%lld", _bilangan % 2);
}