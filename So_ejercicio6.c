#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

    // Menú
    printf("Menú de operaciones:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("¿Qué operación deseas realizar? ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("*** Elegiste Suma ***\n");
            printf("Ingresa el primer número: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo número: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("El resultado de suma %.2f + %.2f es: %.2f\n", num1, num2, resultado);
            break;

        case 2:
            printf("*** Elegiste Resta ***\n");
            printf("Ingresa el primer número: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo número: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("El resultado de resta %.2f - %.2f es: %.2f\n", num1, num2, resultado);
            break;

        case 3:
            printf("*** Elegiste Multiplicacion ***\n");
            printf("Ingresa el primer número: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo número: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("El resultado de multiplicacion %.2f * %.2f es: %.2f\n", num1, num2, resultado);
            break;

        case 4:
            printf("*** Elegiste Division ***\n");
            printf("Ingresa el primer número: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo número: ");
            scanf("%f", &num2);
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("El resultado de division %.2f / %.2f es: %.2f\n", num1, num2, resultado);
            } else {
                printf("Error: no se puede dividir entre 0.\n");
            }
            break;

        default:
            printf("Operacion invalida.\n");
            break;
    }

    printf("Adios\n");
    return 0;
}

