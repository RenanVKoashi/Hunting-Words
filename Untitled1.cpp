	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	#include<cstdlib>
	#define COL1 5

	void Matriz1(char matriz[][COL1]){
		
		int i, j;
		
		for(i = 0; i < 5; i++){
			
			for(j = 0; j < 5; j++){
				
				printf("%c ", matriz[i][j]);
				
			}
			
			printf("\n");
			
		}
			
	}


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int codigo, comandoJogar;
		char matrizFacil[5][5] = {{'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}};
		
		
		do{
			
			printf("CAÇA-PALAVRAS");
			printf("\n===================================\n");
			printf("1. JOGAR\n2. COMO JOGAR\n3. SAIR\n\n");
			printf("NÚMERO: ");
			scanf("%d", &codigo);
			
			system("cls");
			
			while(codigo < 1 || codigo > 3){
				
				printf("CAÇA-PALAVRAS");
				printf("\n===================================\n");
				printf("1. JOGAR\n2. COMO JOGAR\n3. SAIR\n\n");
				printf("NÚMERO: ");
				scanf("%d", &codigo);	
				
				system("cls");	
				
			}
			
			switch(codigo){
				
				case 1:
					Matriz1(matrizFacil);
					scanf("%d", &comandoJogar);
					
					system("cls");
					break;
					
				case 2:
					printf("COMO JOGAR");
					printf("\n===================================\n");
					printf("instruçoes");
					printf("\n");
					
					system("pause");
					system("cls");
					break;
					
				case 3:
					printf("SAINDO...");
					
					return 0;
				
			}
			
		}while(1);
		
		return 0;
	}
