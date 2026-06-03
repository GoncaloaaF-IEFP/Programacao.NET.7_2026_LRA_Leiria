#include <stdio.h>
int len(int array[]);

void f2(int lista[], int valor);
void x(int valor);

int main(void) {
/*
    int lista[] = {4,5,1,5,1,5,1,2,12}; // array com valores pre-definidos
    int numElementos = 9;

    *
     * em no maximo 4 linhas mostre todos os elementos do array (tem de usar um loop)
     *
     *

    for (int i = 0; i < numElementos; i++) {
        printf("%d\n", lista[i]);
    }

    printf("\n%d\n", lista[8]);

    // printf("\n\n%d\n", lista[11212]);

    lista[8] = 123;

    printf("\n\n%d\n", lista[8]);




    lista[8] = -1;

    printf("\n\n%d\n", lista[8]);
    printf("Continua\n");



    int arraySize = 5;
    int listaVazia[arraySize];

    listaVazia[3] = 12;

//    listaVazia[5] = 9988;
  //  printf("\n\n%d\n", listaVazia[5]);


//    listaVazia[512] = 1223331;
    printf("\n\n%d\n", listaVazia[512]);


    for (int i = 0; i < 5; i++) {
        printf("%d\n", listaVazia[i]);
    }


    // Crie uma lista com 10 valores pedidos ao utilizador

    // Mostre o conteudo da lista


    int maxSize = 10;
    int lista2[maxSize];

    for (int i = 0; i < maxSize; i++) {
        //int aux;

        printf("Digite o %dº elemento: ", i + 1);
        //scanf("%d", &aux);
       // lista2[i] = aux;
        scanf("%d", &lista2[i]);
    }


    for (int i = 0; i < maxSize; i++) {
        printf("%d  ", lista2[i]);
    }
    printf("\n");

    int max = lista2[0];
    int min = lista2[0];

    // mostre o maior elemento da lista
    // mostre o menor elemento da lista

    for (int i = 0; i < maxSize; i++) {
        if (lista2[i] < min) {
            min = lista2[i];
        }
        if (lista2[i] > max) {
            max = lista2[i];
        }
    }


    // mostre os elementos par

    for (int i = 0; i < maxSize; i++) {
        if (lista2[i] % 2 == 0) {
            printf("%d  ", lista2[i]);
        }
    }



    // mostre os elementos nos index par
    // maxSize = 9

    // 0 2 4 6 8
    for (int i = 0; i < maxSize; i += 2) {
        if (lista2[i] % 2 == 0) {
            printf("%d  ", lista2[i]);
        }
    }

    // maxSize = 9
    // 0 1 2 3 4 5 6 7 8 9
    for (int i = 0; i < maxSize; i++) {
        if (i % 2 == 0) {
            printf("%d  ", lista2[i]);
        }
    }



    int lista3[] = {4,5,1,5,1,5,1,2,12,4,5,1,5,1,5,1,2,12,4
        ,5,1,5,1,5,1,2,12,4,5,1,5,1,5,1,2,12,4,5,1,5,1,5,1,
        2,12,4,5,1,5,1,5,1,2,12,4,5,1,5,1,5,1,2,12};


    int size = sizeof(lista3); //36b
    int sizeElm = sizeof(lista3[0]);

    printf("\n\n%zu\n", size);
    printf("%zu\n", sizeElm);

    int numElm = sizeof(lista3) / sizeof(lista3[0]);

    printf("-------");

    len(lista3);
    */

    int t = 0;
    x(t);
    printf("%d\n", t);
    
    int lista3[] = {4,5,1,5};

    printf("%d\n", lista3[0]);
    f2(lista3, 99999);
    printf("%d\n", lista3[0]);

    return 0;
}

void x(int valor) {
    valor = 30;
}

void f2(int lista[], int valor) {
    lista[0] = valor; // <--
}


// ==
// =



/*
void len(int array[]) {
    int size = sizeof(array); //36b
    int sizeElm = sizeof(array[0]);

    printf("\n\n%zu\n", size);
    printf("%zu\n", sizeElm);

}
*/