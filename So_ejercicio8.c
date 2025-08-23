#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palabra[51]; // 50 caracteres + '\0'
    int i, longitud;
    int vocales = 0, consonantes = 0;

    printf("Introduce una palabra (maximo 50 caracteres): ");
    scanf("%50s", palabra);

    longitud = strlen(palabra);

    for (i = 0; i < longitud; i++) {
        char c = tolower(palabra[i]); // convertir a minúscula para simplificar
        if (c >= 'a' && c <= 'z') { // verificar que sea letra
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vocales++;
            } else {
                consonantes++;
            }
        }
    }

    printf("La palabra %s contiene %d vocales y %d consonantes\n",
           palabra, vocales, consonantes);

    return 0;
}

