#include <stdio.h>


int main(void) {

    int mat[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}
                   };


    printf("%d\n", mat[0][0]);
    printf("%d\n", mat[1][2]);

// mostre todos os elementos da matriz  (loop)

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("%d ", mat[linha][coluna]);
        }
        printf("\n");
    }

    // mostre todos os elementos da matriz  em ordem inversa
    /*

     exp da saida:

      9 8 7
      6 5 4
      3 2 1
    */


    return 0;




}