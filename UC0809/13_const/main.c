#include <stdio.h>

int main(void) {

    int x = 10;
    const int y = 20;
    const float pi = 3.14;

    printf("x - %d\n", x);
    printf("y - %d\n", y);

   // y = 12;
    x = 41;
    printf("x - %d\n", x);
    printf("y - %d\n", y);

    return 0;
}
