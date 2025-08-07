#include <stdio.h>
#include <time.h>

unsigned long long facto_i(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }
    return resultado;
}

int main() {
    int n;
    printf("ingrese un numero: ");
    scanf("%d", &n);

    clock_t inicio = clock();
    unsigned long long resultado = facto_i(n);
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("factorial iterativo: %llu\n", resultado);
    printf("tiempo: %f segundos\n", tiempo);

    return 0;
}

