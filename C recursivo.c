#include <stdio.h>
#include <time.h>

unsigned long long facto_r(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * facto_r(n - 1);
}

int main() {
    int n;
    printf("ingrese un numero: ");
    scanf("%d", &n);

    clock_t inicio = clock();
    unsigned long long resultado = facto_r(n);
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("factorial recursivo: %llu\n", resultado);
    printf("tiempo: %f segundos\n", tiempo);

    return 0;
}
