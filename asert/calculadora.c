#include <stdio.h>
#include <assert.h>

void mostrarMenu(){
    printf("\nCalculadora Simple\n");
    printf("Selecciona una opción:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("s. Salir\n");
    printf("Elige una opción: ");
}

int main(){
    char option;
    float num1, num2, resultado;

    do{

        mostrarMenu();
        scanf(" %C", &option);
        if(option == 's'){
            printf("Saliendo de la calculadora...\n");
             break;
        }

        if (option >= '1' && option <= '4') {
            printf("Ingresa el primer número: ");
            scanf("%f", &num1);
            printf("Ingresa el segundo número: ");
            scanf("%f", &num2);
        }

        switch (option) {
            case '1':
                resultado = num1 + num2;
                printf("Resultado de la suma: %.2f\n", resultado);
                break;
            case '2':
                resultado = num1 - num2;
                printf("Resultado de la resta: %.2f\n", resultado);
                break;
            case '3':
                resultado = num1 * num2;
                printf("Resultado de la multiplicación: %.2f\n", resultado);
                break;
            case '4':
                assert(num2 != 0);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado de la división: %.2f\n", resultado);
                } else {
                    printf("Error: División por cero no permitida.\n");
                }
                break;
            default:
                printf("Opción inválida. Por favor, elige una opción válida.\n");
        }
    }while(option != 's');
    return 0;
}