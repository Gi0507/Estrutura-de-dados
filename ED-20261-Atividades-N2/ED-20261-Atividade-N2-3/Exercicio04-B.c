RA:2040482513020 Giovanne Crispim de Lima
#include <stdio.h>
long long potenciarapida(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }else
    base *= potenciarapida(base, expoente - 1);
    return base;    
}