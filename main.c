#include <stdio.h>
#include <stdlib.h>

struct media_aluno {
    char nome[40];
    float nota1;
    float nota2;
};

int main(int argc, char *argv[]) {
    struct media_aluno alunos[10];
    float medias[10];

    printf("\n--------- Cadastro de alunos ----------\n");

    int i; // Movida a declaração de 'i' para fora do loop

    for (i = 0; i < 10; i++) {
        printf("\nNome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 40, stdin);

        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &alunos[i].nota1);
        while(getchar() != '\n'); // Limpar o buffer de entrada
        
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &alunos[i].nota2);
        while(getchar() != '\n'); // Limpar o buffer de entrada

        // Cálculo da média para o aluno atual
        medias[i] = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
    }

    printf("\n------- Resultados -------\n");

    // Exibindo as médias de todos os alunos
    for (i = 0; i < 10; i++) {
        printf("A media do aluno %s e: %.2f\n\n", alunos[i].nome, medias[i]);
    }

    return 0;
}

