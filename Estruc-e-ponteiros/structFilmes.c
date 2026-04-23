#include <stdio.h>
#include <string.h>

typedef struct {
	char ator1[30];
	char ator2[30];
	char ator3[30];
	char ator4[30];
}Elenco;

typedef struct {
	char nome[40];
	char duracao[20];
	char genero[50];
	int anoLancamento;
	int classificacaoIndicativa;
	Elenco elenco1;
}Filme;

int main(){
	Filme filme;
	
	strcpy(filme.nome, "Ainda Estou Aqui");
	strcpy(filme.duracao, "2h15m");
	strcpy(filme.genero, "Drama, Biografia");
	filme.anoLancamento = 2024;
	filme.classificacaoIndicativa = 14;
	
	strcpy(filme.elenco1.ator1, "Fernanda Torres");
	strcpy(filme.elenco1.ator2, "Selton Mello");
	strcpy(filme.elenco1.ator3, "Fernanda Montenegro");
	
	printf("==================== ESCOLHA DE FILMES ====================\n\n");
	printf("Nome: %s\n\n", filme.nome);
	printf("Duracao: %s\n", filme.duracao);
	printf("Genero: %s\n", filme.genero);
	printf("Elenco: %s, %s, %s.\n", filme.elenco1.ator1, filme.elenco1.ator2, filme.elenco1.ator3);
	printf("\nAno de Lancamento: %d\n", filme.anoLancamento);
	printf("Classificacao Indicativa: %d anos.\n", filme.classificacaoIndicativa);
	
}
