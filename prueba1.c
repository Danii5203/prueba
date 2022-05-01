#include<stdio.h>

int sumar(int, int);
int restar(int, int);
<<<<<<< HEAD
int producto(int, int);
void elevacion(int, int);
=======
void elevacion(int , int);
>>>>>>> elevacion
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


    elevacion(a, b);

    return 0;
}
void elevacion(int a, int b){
    printf("xd");
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