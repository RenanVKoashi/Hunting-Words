	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	#include<cstdlib>
	#define COL1 5

	void Matriz1(char matriz[][COL1]){               //matriz sendo usada de exemplo para o programa
		
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
		
		int codigo, codigoNvl, comandoJogar;
		char matrizFacil[5][5] = {{'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}, {'a', 'b', 'c', 'd', 'e'}};
		
		
		do{
			
			printf("CAÇA-PALAVRAS");
			printf("\n===================================\n");          //MENU do programa
			printf("1. JOGAR\n2. COMO JOGAR\n3. SAIR\n\n");
			printf("NÚMERO: ");
			scanf("%d", &codigo);
			
			system("cls");
			
			while(codigo < 1 || codigo > 3){                        //caso n seja digitado um numero valido entre as opcoes do MENU
				
				printf("CAÇA-PALAVRAS");
				printf("\n===================================\n");
				printf("1. JOGAR\n2. COMO JOGAR\n3. SAIR\n\n");
				printf("NÚMERO: ");
				scanf("%d", &codigo);	
				
				system("cls");	
				
			}
			
			switch(codigo){                      
				
				case 1:                                      //tela para selecionar o nvl q vai ser jogado
					printf("JOGAR - ESCOLHA UM NÍVEL");
					printf("\n===================================\n");
					printf("1. FÁCIL\n2. MÉDIO\n3. DÍFICIL\n4. VOLTAR\n\n");
					printf("NÚMERO: ");
					scanf("%d", &codigoNvl);
					
					system("cls");
					
					while(codigoNvl < 1 || codigoNvl > 4){             //caso n seja digitado um numero valido entre as opcoes
						
						printf("JOGAR - ESCOLHA UM NÍVEL");
						printf("\n===================================\n");
						printf("1. FÁCIL\n2. MÉDIO\n3. DÍFICIL\n4. VOLTAR\n\n");
						printf("NÚMERO: ");
						scanf("%d", &codigoNvl);
					
						system("cls");
						
					}
					
					switch(codigoNvl){                     
						
						case 1:
							Matriz1(matrizFacil);
							scanf("%d", &comandoJogar);  //sem codigo para jogar ainda
							
							system("cls");
							break;
							
						case 2:
							Matriz1(matrizFacil);           //criar matriz de nvl medio
							scanf("%d", &comandoJogar);         //sem codigo para jogar ainda
							
							system("cls");
							break;
							
						case 3:
							Matriz1(matrizFacil);              // criar matriz de nvl dificil
							scanf("%d", &comandoJogar);           //sem codigo para jogar ainda
							
							system("cls");
							break;
							
						case 4:                           //botao de VOLTAR para o menu
							break;
							
					}
					break;
					
				case 2:                          //tela de instrucoes do jogo
					printf("COMO JOGAR");
					printf("\n===================================\n");
					printf("instruçoes");                //sem instrucoes ainda
					printf("\n\n");
					
					system("pause");    //comando para o "Pressione qualquer tecla..."
					system("cls");
					break;
					
				case 3:                      //fechar o programa
					printf("SAINDO...");       
					
					return 0;
				
			}
			
		}while(1);
		
		return 0;
	}
