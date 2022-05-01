#include<stdio.h>
#include<stdlib.h>

int sumar(int, int);
int restar(int, int);
int cociente(int, int);
void mostrar(int);
void mensaje(char *);

int main(){

    int a, b;
    char *nombre = (char *) malloc(sizeof(char) * 50);
    printf("Ingrese su nombre: ");
    gets(nombre);
    mensaje(nombre);

    printf("Ingrese 'a': ");
    scanf("%d", &a);

    printf("\nIngrese 'b': ");
    scanf("%d", &b);

    int suma = sumar(a, b);
    mostrar(suma);

    int resta = restar(a, b);
    mostrar(resta);

    int div = cociente(a, b);
    mostrar(div);

    return 0;
}

int sumar(int x, int y){
    return x+y;
}

int restar(int x, int y){
    return x-y;
}
int cociente(int x, int y){
    return x/y;
}

void mostrar(int resultado){
    printf("\nEl valor es %d\n", resultado);
}

void mensaje(char *nombre){
    printf("Hola %s!!\n", *nombre);
}