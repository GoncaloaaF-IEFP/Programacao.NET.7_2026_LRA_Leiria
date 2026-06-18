#include <stdio.h>
#include <string.h>


#define MAX_SIZE_NAME 100
#define MAX_SIZE_CURSO 20
#define MAX_NOTAS 20
#define MAX_ALUNOS 50


typedef struct aluno {
    char nome[MAX_SIZE_NAME];
    int idade;
    char curso[MAX_SIZE_CURSO];
    int qt_notas;
    int notas[MAX_NOTAS];
} Aluno;


void showAluno(Aluno aluno);
Aluno createAluno();
void limparBuffer();

int nextAluno = 0;

int main(void) {

    Aluno listaAlunos[MAX_ALUNOS];

    while (nextAluno < MAX_ALUNOS) {

        listaAlunos[nextAluno] = createAluno();
        printf("%s\n", listaAlunos[nextAluno].nome);
        nextAluno++;



        // validar se quero add mais
       printf("Adicionar mais(N para terminar)? ");
        char c = getchar();
        limparBuffer();
        if (c == 'N' || c == 'n') {
            break;
        }

    }



    return 0;
}


Aluno createAluno() {
   Aluno aluno;

    printf("nome do Aluno: ");
    fgets(aluno.nome, MAX_SIZE_NAME, stdin);

    printf("Curso: ");
    fgets(aluno.curso, MAX_SIZE_CURSO, stdin);

    printf("Idade: ");
    scanf("%d", &aluno.idade);
    limparBuffer();

    aluno.qt_notas = 0;
    return aluno;
}



void showAluno(Aluno aluno) {
    printf("-------- informações ---------\n");
    printf("nome %s\nidade %d\ncurso: %s\n", aluno.nome, aluno.idade, aluno.curso);

    printf("----------- Notas ------------\n");
    for (int i = 0; i < 5; i++) {
        printf("notas %d: %d\n",i+1,  aluno.notas[i]);
    }
    printf("------------------------------");
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}