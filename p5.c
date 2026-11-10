
#include <stdio.h>

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}

int main() {

    char operador;
    int a, b, resultado;

    scanf(" %c", &operador);
    scanf("%d", &a);
    scanf("%d", &b);

    switch(operador) {

        case '+':
            resultado = sumar(a, b);
            break;

        case '-':
            resultado = restar(a, b);
            break;

        case '*':
            resultado = multiplicar(a, b);
            break;

        case '/':
            if(b == 0) {
                printf("Error: division por cero\n");
                return 0;
            }

            resultado = dividir(a, b);
            break;
    }

    printf("%d\n", resultado);

    return 0;
}
