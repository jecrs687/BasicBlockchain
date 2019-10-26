#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
//protótipo de blockchain, autor: Isaac Ramos
/*
operção:
1 - saque;
0 - transferencia;
    	op    de:   para:
data: 	1 	1234    4321

*/
struct bloco{
	int time, data;
	float quantia;
};

struct bloco block[5000];

int formaData(op, de, para){
	int a, b, data;
	a = op * pow(10, 8);
	b = de * pow(10, 4);
	data = a + b + para;
	return data;
}

int CriacaoData(){
	int op, de, para, data;
	do{
	printf("op: [1]Saque [2]Transferencia\n");
	scanf("%d", &op);
		if((op != 2)&&(op != 1)){
			printf("tente novamente\n");
		}	
	}while((op != 2)&&(op !=1));
	
	if(op == 1){
		printf("de: ");
		scanf("%d", &de);
		printf("\npara: ");
		scanf("%d", &para);
		data = formaData(op, de, para);
		return data;
	}else if(op == 2){
		scanf("%d", &de);
		scanf("%d", &para);
		data = formaData(op, de, para);
		return data;
	}
}

void AdicionarBlock(int i){
	do{
		block[i].data = CriacaoData();		
		printf("digite a quantia: \n");
		scanf("%f", &block[i].quantia);
		printf("===============================================bloco %d feito==========\n", i);
		i++;		
	}while((block[i].data < 0)||(block[i].quantia < 0));
}

int menu(int op){
	printf("Menu:\n1-Adicionar block e verificar todos\n2-Imprimir bloco\n");
	scanf("%d", &op);
	return op;
}

int main(){
	int op, limpar, index = 1, quant = 0, i = 0, pesq;
	
	for(i = 0; ;i++){
//----------HORA-----------------
	time_t rawtime; //variaveis -------
	struct tm * timeinfo;
	int a;

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	a = asctime(timeinfo);
	block[i].time = a;	 
//--------------------------------------------

	op = menu(op);
	switch(op){
		case 1: AdicionarBlock(i);
				break;
				
		case 2: 
				printf("\ndigite o block de pesquisa: \n");
				scanf("%d", &pesq);
				
				printf("\n\nBLOCK[%d]\nindex = %d\n", pesq, pesq);
				printf("data = %d\n", block[pesq].data);
				printf("time = %s", block[pesq].time);
				//printf("verificado = %d\n", Index);
				printf("quantia = R$ %.2f\n\n", block[pesq].quantia);
				i--;
		default: break;
	}
}
	return 0;
}
