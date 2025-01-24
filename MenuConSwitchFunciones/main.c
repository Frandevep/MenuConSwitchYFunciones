#include <stdio.h>

// prototipos de las funciones
void mostrarMensaje();
void sumarNumeros();

int main() {

    int opcion;

    do {
        // Mostrar menu
        printf("----- Menu -----\n");
        printf("1. Mostrar mensaje\n");
        printf("2. Sumar dos numeros\n");
        printf("3. Salir\n");
        printf("Elige una opcion:");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                mostrarMensaje();
                break;

            case 2:
                sumarNumeros();
                break;

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intenta de nuevo.\n");
        }
    } while(opcion != 3);

    return 0;
}

// Definicion de la funcion para mostrar un mensaje
void mostrarMensaje() {
    printf("hola,este es un mensaje desde una funcion.\n");
}

// definicion de la funcion para sumar numeros
void sumarNumeros() {

    int num1;
    int num2;
    int suma;

    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);
    suma = num1 + num2;
    printf("La suma es:%d\n", suma);
}
