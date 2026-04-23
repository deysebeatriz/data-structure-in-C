#include <stdio.h>
#include <string.h>

struct Pessoa {
	int id;
	char nome[50];
	char naturalidade[20];
	char formacao[20];
	int idade;
	char genero[20];
	float altura;
	char email[80];
};

int main(){
	struct Pessoa p1;
	
	p1.id = 1;
	strcpy (p1.nome, "Deyse");
	strcpy (p1.naturalidade, "Manaus");
	strcpy (p1.formacao, "Ens. Superior Incompleto");
	p1.idade = 23;
	strcpy (p1.genero, "Feminino");
	p1.altura = 1.60;
	strcpy (p1.email, "deyse@gmail.com");
	
	printf("Identificador: %d\n", p1.id);
	printf("Nome: %s\n", p1.nome);
	printf("Naturalidade: %s\n", p1.naturalidade);
	printf("Formacao: %s\n", p1.formacao);
	printf("Idade: %d\n", p1.idade);
	printf("Genero: %s\n", p1.genero);
	printf("Altura: %f\n", p1.altura);
	printf("Email: %f\n", p1.email);
	
}
