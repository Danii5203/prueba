#include<stdio.h>

int sumar(int, int);
int restar(int, int);
void mostrar(int);

int main(){

    int a, b;

    printf("Ingrese 'a': ");
    scanf("%d", &a);

    printf("\nIngrese 'b': ");
    scanf("%d", &b);

    int suma = sumar(a, b);
    mostrar(suma);

    int resta = restar(a, b);
    mostrar(resta);


    return 0;
}

int sumar(int x, int y){
    return x+y;
}

int restar(int x, int y){
    return x-y;
}

void mostrar(int resultado){
    printf("\nEl valor es %d\n", resultado);
}