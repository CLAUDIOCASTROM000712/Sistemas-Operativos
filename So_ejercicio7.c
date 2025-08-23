#include <stdio.h>
#include <string.h>

int main() {
    char nombre[11]; // 10 caracteres + '\0'
    int i, longitud;

    printf("Ingrese un nombre (maximo 10 caracteres): ");
    scanf("%10s", nombre);

    longitud = strlen(nombre);

    printf("El nombre al reves es: ");
    for (i = longitud - 1; i >= 0; i--) {
        printf("%c", nombre[i]);
    }
    printf("\n");

    return 0;
}

