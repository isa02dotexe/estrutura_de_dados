#include <stdio.h>
#include <stdlib.h>

//criando a struct
struct Aluno
{
	int codigo;
	char nome[200];
	float nota;
};


int main()
{


	//criando uma instancia da struct
	struct  Aluno aluno_especial;

	//zerando a struct
	aluno_especial.codigo = 0;
	strcpy(aluno_especial.nome, "NULL");
	aluno_especial.nota = 0.0;

	
	//lendo os dados pelo teclado
	printf("Digite o CODIGO do aluno especial: ");
	scanf("%d", &aluno_especial.codigo);
	printf("Digite o NOME do aluno especial: ");
	scanf("%s", &aluno_especial.nome);
	printf("Digite a NOTA do aluno especial: ");
	scanf("%f", &aluno_especial.nota);
	printf("\n ------------------------------------------");
	
	printf("\n O codigo do aluno especial eh: %d", aluno_especial.codigo);
	printf("\n O nome do aluno especial eh: %s", aluno_especial.nome);
	printf("\n A nota do aluno especial eh: %.2f", aluno_especial.nota);
	printf("\n ------------------------------------------");
	
	return 0;
}
