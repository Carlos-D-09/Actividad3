#include<stdio.h>

int main (){
    char nombre[100];
    printf("\nHello World");
    printf("\n\nIntroduce tu nombre: ");
    fgets(nombre, sizeof(nombre),stdin);
    printf("\nHola: %s", nombre);

    printf("\n");
    return 0;
}