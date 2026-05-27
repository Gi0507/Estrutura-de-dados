RA:2040482513020 Giovanne Crispim de Lima
#include <stdio.h> 

int main() {
    int x[]= {10,20,30,40,50};
    for(int i=0;i<5;i++){
        printf("\nValor de x: %d\nEndereco de x: %p\n", x, &x);
    }
    return 0;
}