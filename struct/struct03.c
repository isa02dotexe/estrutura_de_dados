#include <stdio.h>
#include <stdlib.h>


struct Alunos
{
	int matricula;
	float av1, av2;
};

int main()
{
	int i = 0;
	int op = 0;
	float maiorMediaGeral = 0.0;
	float media = 0.0;
	int matriculaMaiorMedia = 0;
	float maiorNota = 0.0;
	int matriculaMaiorNota = 0;

	struct Alunos notas[5];

	for (i = 0; i < 5; i++)
	{
		printf("\nDigite a matricula do aluno:  ");
		scanf("%d", &notas[i].matricula);
		printf("\nDigite a nota da AV1: ");
		scanf("%f", &notas[i].av1);
		printf("\nDigite a nota da AV2: ");
		scanf("%f", &notas[i].av2);
	}

	//loop para continuar no menu
	while(op != 4)
	{
		//menu
		printf("MENU\n");
		printf("1 - Matricula do aluno com maior nota da AV1 \n");
		printf("2 - Matricula do aluno com maior nota da AV2 \n");
		printf("3 - Matricula do aluno com maior media geral \n");
		printf("4 - Sair\n");
		printf("Digite a opcao: " );
		scanf("%d", &op);


		//opções do menu
		switch (op)
		{
		case 1:   //Matricula do aluno com maior nota da AV1
			printf("\nMatricula do aluno com maior nota da AV1 \n");

			for(i = 0; i < 5; i++)
			{
				if(notas[i].av1 > maiorNota)
				{
					maiorNota = notas[i].av1;
					matriculaMaiorNota = notas[i].matricula;
				}
			}
			printf("Matricula com maior nota da AV1: %d\n", matriculaMaiorNota);

			printf("\n");
		break;

		case 2:   //Matricula do aluno com maior nota da AV2
			printf("\nMatricula do aluno com maior nota da AV2\n");
	
			for(i = 0; i < 5; i++)
			{
				if(notas[i].av2 > maiorNota)
				{
					maiorNota = notas[i].av2;
					matriculaMaiorNota = notas[i].matricula;
				}
			}
			printf("Matricula com maior nota da AV2: %d\n", matriculaMaiorNota);
	
			printf("\n");
			break;

		case 3:  //Matricula do aluno com maior media geral
			printf("\nMatricula do aluno com maior media geral\n");
	
			for (i = 0; i < 5; i++)
			{
				media = (notas[i].av1 + notas[i].av2) / 2;
				if (media > maiorMediaGeral)
				{
					maiorMediaGeral = media;
					matriculaMaiorMedia = notas[i].matricula;
				}
			}
			printf("\nA maior media eh da matricula : %d\n", matriculaMaiorMedia);
			break;

		case 4:
			printf("Acabou o programa\n");
			break;

		default:
			printf("Opção invalida!\n");
			break;
		}
	}
}
