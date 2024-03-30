#include <stdio.h>
#include <stdlib.h>
//a)
int cuadrado(int numero){
    return numero*numero;
}
//b)
void cuadradoVoid(int numero){
    printf("El cuadrado del numero es %d", numero*numero);
}
//c)
void muestraContenidoDireccion(int numero){
    printf("Contenido: %d\n", numero);
    printf("Direccion: %p\n", &numero);

}
//d)
#include <stdio.h>

void Invertir(int *a, int *b) {
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

void Orden(int* a, int* b){
    if(*b>*a){
        Invertir(a,b);
    }
}

int main() {
  int *a = (int*)malloc(sizeof(int));
  int *b = (int*)malloc(sizeof(int));
  *a = 5;
  *b = 2;
  Invertir(a, b);
  printf("a: %d\nb: %d\n",*a,*b);
  Orden(a, b);
  printf("a: %d\nb: %d\n",*a,*b);
  free(a);
  free(b);
  return 0;
}
