#include <stdio.h>
#include <string.h>

typedef struct {
	int cep;
	char rua[40];
	int numero;
	char bairro[30];
	char cidade[20];
	char uf[3];
}Endereco;

typedef struct{
	char nome[50];
	int idade;
	char genero[20];
	Endereco end;
}Pessoa;

int main(){
	Pessoa p;
	
	strcpy(p.nome, "Deyse Beatriz");
	p.idade = 23;
	strcpy(p.genero, "Feminino");
	
	p.end.cep = 69043555;
	strcpy(p.end.rua, "Rua das Flores");
	p.end.numero = 29;
	strcpy(p.end.bairro, "Flores");
	strcpy(p.end.cidade, "Manaus");
	strcpy(p.end.uf, "AM");
	
	printf("============== Dados Cadastrais ==============\n");
	printf("\n***Dados Pessoais***\n\n");
	printf("Nome: %s\n", p.nome);
	printf("Nome: %d\n", p.idade);
	printf("Genero: %s\n", p.genero);
	
	printf("\n***Dados de Endereco***\n\n");
	printf("CEP: %d\n", p.end.cep);
	printf("Rua: %s\n", p.end.rua);
	printf("Numero: %d\n", p.end.numero);
	printf("Bairro: %s\n", p.end.bairro);
	printf("Cidade: %s\n", p.end.cidade);
	printf("UF: %s\n", p.end.uf);
	printf("==============================================\n");
}
