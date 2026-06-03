#include <stdio.h>

void tabuada(int num);


int main(void) {
    printf("Hello, World!\n");

    int i = 3;

    for (int i = 1; i <= 1024; i*=2 ) {
        printf("%d\n", i);
    }

    printf("-->%d<--\n", i);

    /*
     * Crie uma função que receba um valor e mostra a tabuada desse valor
     * Garanta que o número é maior que 0
     *
     *
     *
     *  x * y = z
     *
     *  1 * 2 = 2
     *  2 * 2 = 4
     */

    tabuada(5);
    return 0;
}

void tabuada(int num) {
    // validar se num é postivo
    if (num <= 0) {
        printf("Tabuada invalido\n");
        return;
    }
    printf("Tabuada do %d\n", num);

    for (int i = 1; i <= 10; i++) {
        int res = num * i;
        printf("%2d x %02d = %d\n", i, num, res);
    }
}