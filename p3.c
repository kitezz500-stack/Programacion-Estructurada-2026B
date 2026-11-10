#include <stdio.h>

int buscar(int arreglo[], int n, int valor) {

    for(int i = 0; i < n; i++) {

        if(arreglo[i] == valor) {
            return i;
        }
    }

    return -1;
}

int main() {

    int n, valor, resultado;
    int arreglo[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }

    scanf("%d", &valor);

    resultado = buscar(arreglo, n, valor);

    printf("%d\n", resultado);

    return 0;
}
