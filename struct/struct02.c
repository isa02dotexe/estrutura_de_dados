#include <stdio.h>
#include <stdlib.h>

struct dma
{
	int dia;
	int mes;
	int ano;
};

int main(){
	
	struct dma data1, data2;
	
	//zerando a struct
	data1.ano = 0;
	data1.mes = 0;
	data1.dia = 0;
	
	data2.ano = 0;
	data2.mes = 0;
	data2.dia = 0;

	//INSERINDO AS DATAS
	printf("Digite o DIA da data mais RECENTE: ");
	scanf("%d", &data1.dia);
	printf("Digite o MES da data mais RECENTE: ");
	scanf("%d", &data1.mes);
	printf("Digite o ANO da data mais RECENTE: ");
	scanf("%d", &data1.ano);
	printf("\n------------------------------------------\n");
	
	printf("Digite o DIA da data mais ANTIGA: ");
	scanf("%d", &data2.dia);
	printf("Digite o MES da data mais ANTIGA: ");
	scanf("%d", &data2.mes);
	printf("Digite o ANO da data mais ANTIGA: ");
	scanf("%d", &data2.ano);
	printf("\n------------------------------------------\n");
	
    
	//CALCULO DAS DATAS
	int diasEst1 = data1.dia + (30 * data1.mes) + (365 * data1.ano);
	int diasEst2 = data2.dia + (30 * data2.mes) + (365 * data2.ano);
	
	// Exibindo os resultados
	printf("Dias de diferença entre as duas datas: %d\n", abs(diasEst1 - diasEst2));
	
	return 0;
}