#include<stdio.h>

int main (){
    unsigned int edad;
    char nombre[100];
    printf("Hello World");
    printf("\n\nIntroduce tu nombre: ");
    fgets(nombre, sizeof(nombre),stdin);
    printf("\nHola: %s", nombre);
    printf("\nCuál es la edad: ");
    scanf("\n%d", &edad);
    printf("\nVas a cumplir %d", edad+1);
    printf("\n\n");
    return 0;
}