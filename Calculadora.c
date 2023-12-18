#include <stdio.h>
#include <math.h>

// Prototipos de funciones
void mostrarMenu();
int ejecutarOperacion(int opcion, float num1, float num2);

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        mostrarMenu();

        printf("Ingrese la opción deseada: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 10) {
            if (opcion >= 1 && opcion <= 4) {
                printf("Ingrese el primer número: ");
                scanf("%f", &num1);

                printf("Ingrese el segundo número: ");
                scanf("%f", &num2);
            } else {
                printf("Ingrese el número: ");
                scanf("%f", &num1);
            }

            resultado = ejecutarOperacion(opcion, num1, num2);
            printf("Resultado: %f\n", resultado);
        } else if (opcion != 0) {
            printf("Opción no válida. Por favor, ingrese una opción del 0 al 10.\n");
        }

    } while (opcion != 0);

    printf("Saliendo del programa. ¡Hasta luego!\n");

    return 0;
}

void mostrarMenu() {
    printf("--- Calculadora Avanzada ---\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. Potencia\n");
    printf("6. Raíz Cuadrada\n");
    printf("7. Logaritmo\n");
    printf("8. Seno\n");
    printf("9. Coseno\n");
    printf("10. Tangente\n");
    printf("0. Salir\n");
}

int ejecutarOperacion(int opcion, float num1, float num2) {
    switch (opcion) {
        case 1:
            return num1 + num2;
        case 2:
            return num1 - num2;
        case 3:
            return num1 * num2;
        case 4:
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Error: División por cero.\n");
                return 0;
            }
        case 5:
            printf("Ingrese el exponente: ");
            scanf("%f", &num2);
            return pow(num1, num2);
        case 6:
            return sqrt(num1);
        case 7:
            printf("Ingrese la base del logaritmo: ");
            scanf("%f", &num2);
            return log(num1) / log(num2);
        case 8:
            return sin(num1);
        case 9:
            return cos(num1);
        case 10:
            return tan(num1);
        default:
            printf("Opción no válida.\n");
            return 0;
    }
}
