#include <stdio.h>
#include <string.h>

struct Aluno {
	char nome[50];
	float nota;
	int idade;
	char turma[5];
	char turno[10];
	
	;
};

int main(){
	int i;
	
	struct Aluno aluno[4];
	
	strcpy(aluno[0].nome, "Deyse");
	aluno[0].nota = 8.5;
	
	strcpy(aluno[1].nome, "Diana");
	aluno[1].nota = 10;
	
	strcpy(aluno[2].nome, "Jessica");
	aluno[2].nota = 9.5;
	
	strcpy(aluno[3].nome, "Lucas");
	aluno[3].nota = 6;
	
	
	printf("=========================\n");
	for(i = 0; i < 4; i++){
		printf("Aluno: %s| Nota: %.2f\n", aluno[i].nome, aluno[i].nota);
	}
	
	return 0;
	
}
