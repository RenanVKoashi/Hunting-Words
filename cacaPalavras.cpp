	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	#include <windows.h>
	#define COL1 8
	#define COL2 10
	#define COL3 12

    	void menuCarregamento(int i){	// FunÃƒÂ§ÃƒÂ£o que deve ser chamada sempre que a tela de carregamento for necessÃƒÂ¡ria
        
        	for(i=0; i<4; i++){
            		system("cls");    // Comando Sleep tem a funÃƒÂ§ÃƒÂ£o de parar a execuÃƒÂ§ÃƒÂ£o pelo tempo determinado
			printf("o---");
            		Sleep(200);
            		system("cls");
			printf("-o--");
            		Sleep(200);
            		system("cls");
			printf("--o-");
            		Sleep(200);
            		system("cls");
			printf("---0\n");
            		Sleep(200);
            		system("cls");
            		printf("o---");
            		i++;
        	}
    	}

	void MatrizProg1(char matriz[][COL1]){               //matriz sendo usada de exemplo para o programa
		
		int i, j;
		
		for(i = 0; i < COL1; i++){
			
			for(j = 0; j < COL1; j++){
				
				printf("%c ", matriz[i][j]);
				
			}
			
			printf("\n");
			
		}
			
	}
	
	void MatrizProg2(char matriz[][COL2]){
		
		int i, j;
		
		for(i = 0; i < COL2; i++){
			
			for(j = 0; j < COL2; j++){
				
				printf("%c ", matriz[i][j]);
				
			}
			
			printf("\n");
			
		}
		
	}

	void MatrizProg3(char matriz[][COL3]){
		
		int i, j;
		
		for(i = 0; i < COL3; i++){
			
			for(j = 0; j < COL3; j++){
				
				printf("%c ", matriz[i][j]);
				
			}
			
			printf("\n");
			
		}
		
	}

	int main(){
		
		setlocale(LC_ALL, "PORTUGUESE");
		
		int codigo, codigoTema, codigoContinuar, comandoJogar, i;
		char matrizFacil[8][8] = {{'C', 'E', 'P', 'V', 'O', 'I', 'D', 'A'},
                                  {'H', 'H', 'T', 'R', 'O', 'N', 'J', 'R'},
                                  {'A', 'U', 'T', 'E', 'I', 'T', 'G', 'R'},
                                  {'R', 'M', 'S', 'C', 'A', 'N', 'F', 'A'},
                                  {'R', 'E', 'T', 'U', 'R', 'N', 'T', 'Y'},
                                  {'I', 'R', 'R', 'R', 'I', 'S', 'O', 'F'},
                                  {'R', 'A', 'O', 'L', 'H', 'U', 'F', 'L'},
                                  {'C', 'F', 'O', 'N', 'I', 'R', 'T', 'E'}};

        char matrizMedio[10][10] = {{'I', 'B', 'H', 'V', 'J', 'M', 'K', 'P', 'D', 'Y'},
                                    {'D', 'F', 'J', 'L', 'C', 'C', 'J', 'X', 'O', 'M'},
                                    {'A', 'I', 'F', 'U', 'A', 'M', 'E', 'L', 'S', 'E'},
                                    {'A', 'N', 'Z', 'D', 'S', 'W', 'I', 'T', 'C', 'H'},
                                    {'F', 'C', 'T', 'Y', 'E', 'U', 'F', 'G', 'K', 'X'},
                                    {'D', 'L', 'U', 'H', 'Q', 'F', 'U', 'J', 'E', 'H'},
                                    {'R', 'U', 'O', 'X', 'W', 'H', 'I', 'L', 'E', 'D'},
                                    {'C', 'D', 'B', 'A', 'O', 'R', 'T', 'N', 'B', 'W'},
                                    {'R', 'E', 'M', 'A', 'T', 'R', 'I', 'X', 'E', 'W'},
                                    {'Z', 'V', 'F', 'R', 'I', 'U', 'Z', 'I', 'T', 'M'}};

        char matrizDificil[12][12] = {{'O', 'S', 'E', 'F', 'O', 'A', 'N', 'P', 'T', 'L', 'O', 'T'},
                                      {'P', 'R', 'S', 'L', 'O', 'A', 'S', 'T', 'S', 'G', 'F', 'B'},
                                      {'L', 'Y', 'I', 'O', 'I', 'W', 'T', 'E', 'E', 'N', 'N', 'M'},
                                      {'E', 'U', 'E', 'A', 'I', 'L', 'P', 'N', 'N', 'S', 'A', 'T'},
                                      {'F', 'D', 'F', 'T', 'N', 'I', 'R', 'P', 'T', 'S', 'C', 'A'},
                                      {'O', 'S', 'C', 'O', 'O', 'U', 'W', 'O', 'E', 'F', 'S', 'I'},
                                      {'R', 'H', 'O', 'O', 'T', 'Y', 'E', 'W', 'Y', 'T', 'S', 'N'},
                                      {'C', 'S', 'S', 'E', 'T', 'A', 'T', 'H', 'O', 'I', 'O', 'T'},
                                      {'N', 'F', 'R', 'T', 'E', 'R', 'I', 'I', 'A', 'C', 'E', 'E'},
                                      {'T', 'U', 'S', 'E', 'A', 'R', 'T', 'L', 'N', 'F', 'S', 'T'},
                                      {'E', 'X', 'I', 'R', 'T', 'A', 'M', 'E', 'S', 'A', 'C', 'L'},
                                      {'I', 'I', 'N', 'A', 'K', 'R', 'E', 'A', 'E', 'T', 'H', 'D'}};

		do{
			
			printf("CAÃƒâ€¡A-PALAVRAS");
			printf("\n===================================\n");          //MENU do programa
			printf("1. JOGAR\n2. COMO JOGAR\n3. QUADRO DE LÍDERES\n4. SAIR\n\n");
			printf("---> ");
			scanf("%d", &codigo);
			
			system("cls");
			
            menuCarregamento(i);
			
			system("cls");
			
			while(codigo < 1 || codigo > 4){                        //caso n seja digitado um numero valido entre as opcoes do MENU
				
				printf("CAÃƒâ€¡A-PALAVRAS");
				printf("\n===================================\n");
				printf("1. JOGAR\n2. COMO JOGAR\n3. QUADRO DE LÍDERES\n4. SAIR\n\n");
				printf("---> ");
				scanf("%d", &codigo);	
				
				system("cls");	
				
			}
			
			switch(codigo){                      
				
				case 1:                                  		    //tela para selecionar o tema de jogo q vai ser jogado
					printf("JOGAR - ESCOLHA UM TEMA");
					printf("\n===================================\n");
					printf("1. PROGRAMAÇÃO\n2. TEMA 2\n3. VOLTAR\n\n");
					printf("---> ");
					scanf("%d", &codigoTema);
					
					system("cls");
					
					while(codigoTema < 1 || codigoTema > 3){             //caso n seja digitado um numero valido entre as opcoes
						
						printf("JOGAR - ESCOLHA UM TEMA");
						printf("\n===================================\n");
						printf("1. PROGRAMAÇÃO\n2. TEMA 2\n4. VOLTAR\n\n");
						printf("---> ");
						scanf("%d", &codigoTema);
					
						system("cls");
						
					}
					
					switch(codigoTema){                     
						
						case 1:
							MatrizProg1(matrizFacil);
							scanf("%d", &comandoJogar);
							
							system("cls");
							
							printf("VOCÊ ENCONTROU TODAS AS PALAVRAS!");
							printf("\n===================================\n");
							printf("PRÓXIMO NÍVEL?\n1. SIM\n2. NÃO\n\n");
							printf("---> ");
							scanf("%d", &codigoContinuar);
							
							while(codigoContinuar < 1 || codigoContinuar > 2){
								
								system("cls");
								
								printf("VOCÊ ENCONTROU TODAS AS PALAVRAS!");
								printf("\n===================================\n");
								printf("PRÓXIMO NÍVEL?\n1. SIM\n2. NÃO\n\n");
								printf("---> ");
								scanf("%d", &codigoContinuar);
								
							}
							
							if(codigoContinuar == 1){
								
								system("cls");
								
								MatrizProg2(matrizMedio);
								scanf("%d", &comandoJogar);
							
								system("cls");
								
								printf("VOCÊ ENCONTROU TODAS AS PALAVRAS!");
								printf("\n===================================\n");
								printf("PRÓXIMO NÍVEL?\n1. SIM\n2. NÃO\n\n");
								printf("---> ");
								scanf("%d", &codigoContinuar);
								
								while(codigoContinuar < 1 || codigoContinuar > 2){
								
									system("cls");
								
									printf("VOCÊ ENCONTROU TODAS AS PALAVRAS!");
									printf("\n===================================\n");
									printf("PRÓXIMO NÍVEL?\n1. SIM\n2. NÃO\n\n");
									printf("---> ");
									scanf("%d", &codigoContinuar);
								
								}
								
								if(codigoContinuar == 1){
									
									system("cls");
									
									MatrizProg3(matrizDificil);
									scanf("%d", &comandoJogar);
							
									system("cls");
									
									printf("VOCÊ FINALIZOU TODOS OS NÍVEIS!");
									printf("\n===================================\n\n");
									printf("PONTUAÇÃO: PONTOS\n\n");
									
									system("pause");
									system("cls");
									
								}else{
									
									system("cls");
									break;
									
								}
								
							}else{
								
								system("cls");
								break;
								
							}
							break;
							
						case 2:
							//Tema 2
							break;
							
						case 3:                           //botao de VOLTAR para o menu
							break;
							
					}
					break;
					
				case 2:                          //tela de instrucoes do jogo
					printf("COMO JOGAR");
					printf("\n===================================\n");
					printf("instruÃƒÂ§oes");                //sem instrucoes ainda
					printf("\n\n");
					
					system("pause");    //comando para o "Pressione qualquer tecla..."
					system("cls");
					break;
					
				case 3:
					printf("QUADRO DE LÍDERES");
					printf("\n===================================\n");
					
					system("pause");
					system("cls");
					break;
				
				case 4:                      //fechar o programa
					printf("SAINDO...");       
					
					return 0;
				
			}
			
		}while(1);
		
		return 0;
	}
