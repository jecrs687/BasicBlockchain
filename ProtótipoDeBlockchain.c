#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
//protótipo de blockchain, autor: Isaac Ramos
typedef struct{
	int index, time, data;
} bloco;

void HoraEdata(){
 
}

struct AdicionarBlock(struct bloco block, int i){
	int bloco.index;
	bloco.index = 000000;
	printf("%d", bloco.index);
	
	return bloco;
}

int menu(int op){
	printf("Menu:\n1-Adicionar block e verificar todos\n2-Imprimir bloco");
	scanf("%d", &op);
	return op;
}

int main(){
	int op, limpar, i;
	bloco block[1000];
	
	//provavelmente um laço aqui ----
	op = menu(op);
	switch(op){
		i = 0;
		case 1: AdicionarBlock(block, i);
				
		default: break;
	}
//----------------------------------------
	return 0;
}

