#include <stdio.h>

// Funcao que soma dois numeros
int soma(int a, int b) {
    return a + b;
}

int main(void) {
    int resultado = soma(5, 3);
    printf("Resultado da soma: %d\n", resultado);

    return 0;
}
