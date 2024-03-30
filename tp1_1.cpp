#include <stdio.h>

int main(){
    
    int numero = 3;
    int * pNumero;
    pNumero = &numero;
    printf("El contenido del puntero es:%d \n", *pNumero);
    printf("La direccion de memoria almacenada por el puntero es:%p\n", pNumero);
    printf("La direccion de memoria de la variable numero es: %p\n", &numero);
    printf("La direccion de memoria del puntero es: %p\n", &pNumero);
    printf("El tamaño de memoria utilizado por la variable numeroo es: %d\n", sizeof(numero));
    return 0;
}