#include <stdio.h>
#include <string.h>


typedef struct funcionario {
    char nome[50];
    int idade;
    float salario;
} Funcionario;


typedef struct aluno {
    char nome[50];
    int idade;
    char curso[10];
    int notas[10];
} Aluno;

void showAluno(Aluno aluno);

int main(void) {

    /*
    printf("Hello, World!\n");

    Funcionario funcionario = {"Gonçalo", 19, 1500};

    printf("nome %s\n", funcionario.nome);
    printf("idade %d\n", funcionario.idade);

    // crie um aluno com 4 porp (com pelo menos uma array de char)
    // modifica as 4
    //mostre as 4 porp

    // bonus: Crie uma lista de alunos

*/
    Aluno aluno = {"Gonçalo",20, ".Net", {10,12,2,10,12}};

    printf("nome %s\n", aluno.nome);

    strcpy(aluno.nome, "Maria");
    printf("nome %s\n", aluno.nome);
    aluno.idade += 1;

    strcpy(aluno.curso, "Java");
    aluno.notas[5] = 19;

    showAluno(aluno);

    return 0;
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