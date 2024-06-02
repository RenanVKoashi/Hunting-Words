	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	#include <windows.h>
	#define COL1 8
	#define COL2 10
	#define COL3 12

    	void menuCarregamento(int i){	// FunÃ§Ã£o que deve ser chamada sempre que a tela de carregamento for necessÃ¡ria
        
        	for(i=0; i<4; i++){
            		system("cls");    // Comando Sleep tem a funÃ§Ã£o de parar a execuÃ§Ã£o pelo tempo determinado
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

        	printf("0  1  2  3  4  5  6  7 ");
		
		for(i = 0; i < COL1; i++){

			for(j = 0; j < COL1; j++){

				printf("%c ", matriz[i][j]);
				
			}
			
			printf("\n");
			
		}
			
	}
	
	void MatrizProg2(char matriz[][COL2]){
		
		int i, j;
		
       		printf("0  1  2  3  4  5  6  7  8  9");
		
		for(i = 0; i < COL2; i++){

			for(j = 0; j < COL2; j++){
   
				printf("%c ", matriz[i][j]);

			}
			
			printf("\n");
			
		}
		
	}

	void MatrizProg3(char matriz[][COL3]){
		
		int i, j;
		
       		printf("0  1  2  3  4  5  6  7  8  9   10   11");
		
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
		char matrizFacilC[8][8] = {{'C', 'E', 'P', 'V', 'O', 'I', 'D', 'A'},
                                  {'H', 'H', 'T', 'R', 'O', 'N', 'J', 'R'},
                                  {'A', 'U', 'T', 'E', 'I', 'T', 'G', 'R'},
                                  {'R', 'M', 'S', 'C', 'A', 'N', 'F', 'A'},
                                  {'R', 'E', 'T', 'U', 'R', 'N', 'T', 'Y'},
                                  {'I', 'R', 'R', 'R', 'I', 'S', 'O', 'F'},
                                  {'R', 'A', 'O', 'L', 'H', 'U', 'F', 'L'},
                                  {'C', 'F', 'O', 'N', 'I', 'R', 'T', 'E'}};

        char matrizMedioC[10][10] = {{'I', 'B', 'H', 'V', 'J', 'M', 'K', 'P', 'D', 'Y'},
                                    {'D', 'F', 'J', 'L', 'C', 'C', 'J', 'X', 'O', 'M'},
                                    {'A', 'I', 'F', 'U', 'A', 'M', 'E', 'L', 'S', 'E'},
                                    {'A', 'N', 'Z', 'D', 'S', 'W', 'I', 'T', 'C', 'H'},
                                    {'F', 'C', 'T', 'Y', 'E', 'U', 'F', 'G', 'K', 'X'},
                                    {'D', 'L', 'U', 'H', 'Q', 'F', 'U', 'J', 'E', 'H'},
                                    {'R', 'U', 'O', 'X', 'W', 'H', 'I', 'L', 'E', 'D'},
                                    {'C', 'D', 'B', 'A', 'O', 'R', 'T', 'N', 'B', 'W'},
                                    {'R', 'E', 'M', 'A', 'T', 'R', 'I', 'X', 'E', 'W'},
                                    {'Z', 'V', 'F', 'R', 'I', 'U', 'Z', 'I', 'T', 'M'}};

        char matrizDificilC[12][12] = {{'O', 'S', 'E', 'F', 'O', 'A', 'N', 'P', 'T', 'L', 'O', 'T'},
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

        char matrizFacilEsportes[8][8] = { {'J', 'I', 'P', 'T', 'Q', 'V', 'Q', 'A'},
                                          {'O', 'B', 'J', 'I', 'O', 'G', 'O', 'L'},
                                          {'G', 'F', 'H', 'M', 'L', 'K', 'B', 'Q'},
                                          {'A', 'B', 'T', 'E', 'N', 'I', 'S', 'U'},
                                          {'D', 'O', 'O', 'U', 'E', 'E', 'T', 'A'},
                                          {'O', 'Y', 'D', 'L', 'W', 'Z', 'A', 'D'},
                                          {'R', 'X', 'O', 'L', 'A', 'P', 'B', 'R'},
                                          {'K', 'V', 'T', 'A', 'C', 'A', 'V', 'A'}};

        char matrizMedioEsportes[10][10] = { {'C', 'I', 'C', 'L', 'I', 'S', 'M', 'O', 'X', 'A'},
                                            {'L', 'O', 'U', 'Q', 'W', 'U', 'I', 'D', 'X', 'T'},
                                            {'C', 'Q', 'M', 'E', 'Y', 'R', 'N', 'L', 'D', 'L'},
                                            {'T', 'O', 'S', 'P', 'D', 'F', 'O', 'T', 'N', 'E'},
                                            {'R', 'V', 'R', 'A', 'E', 'B', 'G', 'H', 'A', 'T'},
                                            {'E', 'M', 'J', 'R', 'E', 'T', 'R', 'S', 'T', 'I'},
                                            {'I', 'B', 'A', 'T', 'I', 'H', 'I', 'L', 'A', 'S'},
                                            {'N', 'Z', 'U', 'I', 'G', 'D', 'I', 'C', 'C', 'M'},
                                            {'O', 'F', 'X', 'D', 'H', 'R', 'A', 'X', 'A', 'O'},
                                            {'M', 'A', 'R', 'A', 'T', 'O', 'N', 'A', 'O', 'O'}};

        char matrizDificilEsportes[12][12] = { {'T', 'V', 'S', 'I', 'V', 'E', 'N', 'C', 'E', 'D', 'O', 'R'},
                                              {'H', 'S', 'W', 'R', 'E', 'T', 'A', 'K', 'S', 'C', 'U', 'H'},
                                              {'O', 'O', 'P', 'L', 'E', 'H', 'F', 'U', 'T', 'S', 'A', 'L'},
                                              {'A', 'A', 'L', 'O', 'B', 'E', 'D', 'N', 'A', 'H', 'E', 'E'},
                                              {'C', 'D', 'D', 'I', 'C', 'I', 'E', 'E', 'L', 'S', 'T', 'T'},
                                              {'A', 'I', 'W', 'D', 'M', 'N', 'O', 'A', 'K', 'A', 'E', 'A'},
                                              {'N', 'C', 'I', 'N', 'H', 'P', 'D', 'H', 'L', 'S', 'U', 'E'},
                                              {'I', 'R', 'E', 'R', 'O', 'E', 'I', 'T', 'T', 'S', 'Q', 'P'},
                                              {'T', 'O', 'H', 'L', 'M', 'E', 'M', 'A', 'R', 'E', 'S', 'I'},
                                              {'A', 'T', 'A', 'E', 'K', 'W', 'O', 'N', 'D', 'O', 'A', 'U'},
                                              {'P', 'G', 'B', 'H', 'A', 'O', 'T', 'S', 'N', 'A', 'B', 'Q'},
                                              {'O', 'O', 'Y', 'H', 'E', 'C', 'A', 'M', 'P', 'O', 'S', 'E'}};


        do{
			
			printf("CAÃ‡A-PALAVRAS");
			printf("\n===================================\n");          //MENU do programa
			printf("1. JOGAR\n2. COMO JOGAR\n3. QUADRO DE L�DERES\n4. SAIR\n\n");
			printf("---> ");
			scanf("%d", &codigo);
			
			system("cls");
			
            menuCarregamento(i);
			
			system("cls");
			
			while(codigo < 1 || codigo > 4){                        //caso n seja digitado um numero valido entre as opcoes do MENU
				
				printf("CAÃ‡A-PALAVRAS");
				printf("\n===================================\n");
				printf("1. JOGAR\n2. COMO JOGAR\n3. QUADRO DE L�DERES\n4. SAIR\n\n");
				printf("---> ");
				scanf("%d", &codigo);	
				
				system("cls");	
				
			}
			
			switch(codigo){                      
				
				case 1:                                  		    //tela para selecionar o tema de jogo q vai ser jogado
					printf("JOGAR - ESCOLHA UM TEMA");
					printf("\n===================================\n");
					printf("1. PROGRAMA��O\n2. ESPORTES 2\n3. VOLTAR\n\n");
					printf("---> ");
					scanf("%d", &codigoTema);
					
					system("cls");
					
					while(codigoTema < 1 || codigoTema > 3){             //caso n seja digitado um numero valido entre as opcoes
						
						printf("JOGAR - ESCOLHA UM TEMA");
						printf("\n===================================\n");
						printf("1. PROGRAMA��O\n2. ESPORTES 2\n4. VOLTAR\n\n");
						printf("---> ");
						scanf("%d", &codigoTema);
					
						system("cls");
						
					}
					
					switch(codigoTema){                     
						
						case 1:
							MatrizProg1(matrizFacilC);
							scanf("%d", &comandoJogar);
							
							system("cls");
							
							printf("VOC� ENCONTROU TODAS AS PALAVRAS!");
							printf("\n===================================\n");
							printf("PR�XIMO N�VEL?\n1. SIM\n2. N�O\n\n");
							printf("---> ");
							scanf("%d", &codigoContinuar);
							
							while(codigoContinuar < 1 || codigoContinuar > 2){
								
								system("cls");
								
								printf("VOC� ENCONTROU TODAS AS PALAVRAS!");
								printf("\n===================================\n");
								printf("PR�XIMO N�VEL?\n1. SIM\n2. N�O\n\n");
								printf("---> ");
								scanf("%d", &codigoContinuar);
								
							}
							
							if(codigoContinuar == 1){
								
								system("cls");
								
								MatrizProg2(matrizMedioC);
								scanf("%d", &comandoJogar);
							
								system("cls");
								
								printf("VOC� ENCONTROU TODAS AS PALAVRAS!");
								printf("\n===================================\n");
								printf("PR�XIMO N�VEL?\n1. SIM\n2. N�O\n\n");
								printf("---> ");
								scanf("%d", &codigoContinuar);
								
								while(codigoContinuar < 1 || codigoContinuar > 2){
								
									system("cls");
								
									printf("VOC� ENCONTROU TODAS AS PALAVRAS!");
									printf("\n===================================\n");
									printf("PR�XIMO N�VEL?\n1. SIM\n2. N�O\n\n");
									printf("---> ");
									scanf("%d", &codigoContinuar);
								
								}
								
								if(codigoContinuar == 1){
									
									system("cls");
									
									MatrizProg3(matrizDificilC);
									scanf("%d", &comandoJogar);
							
									system("cls");
									
									printf("VOC� FINALIZOU TODOS OS N�VEIS!");
									printf("\n===================================\n\n");
									printf("PONTUA��O: PONTOS\n\n");
									
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
                            MatrizProg1(matrizFacilEsportes);
                            scanf("%d", &comandoJogar);

                            system("cls");

                            printf("VOC� ENCONTROU TODAS AS PALAVRAS!");
                            printf("\n===================================\n");
                            printf("PR�XIMO N�VEL?\n1. SIM\n2. N�O\n\n");
                            printf("---> ");
                            scanf("%d", &codigoContinuar);

                            while(codigoContinuar < 1 || codigoContinuar > 2){

                                system("cls");

                                printf("VOC� ENCONTROU TODAS AS PALAVRAS!");
                                printf("\n===================================\n");
                                printf("PR�XIMO N�VEL?\n1. SIM\n2. N�O\n\n");
                                printf("---> ");
                                scanf("%d", &codigoContinuar);

                            }

                            if(codigoContinuar == 1){

                                system("cls");

                                MatrizProg2(matrizMedioEsportes);
                                scanf("%d", &comandoJogar);

                                system("cls");

                                printf("VOC� ENCONTROU TODAS AS PALAVRAS!");
                                printf("\n===================================\n");
                                printf("PR�XIMO N�VEL?\n1. SIM\n2. N�O\n\n");
                                printf("---> ");
                                scanf("%d", &codigoContinuar);

                                while(codigoContinuar < 1 || codigoContinuar > 2){

                                    system("cls");

                                    printf("VOC� ENCONTROU TODAS AS PALAVRAS!");
                                    printf("\n===================================\n");
                                    printf("PR�XIMO N�VEL?\n1. SIM\n2. N�O\n\n");
                                    printf("---> ");
                                    scanf("%d", &codigoContinuar);

                                }

                                if(codigoContinuar == 1){

                                    system("cls");

                                    MatrizProg3(matrizDificilEsportes);
                                    scanf("%d", &comandoJogar);

                                    system("cls");

                                    printf("VOC� FINALIZOU TODOS OS N�VEIS!");
                                    printf("\n===================================\n\n");
                                    printf("PONTUA��O: PONTOS\n\n");

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
							
						case 3:                           //botao de VOLTAR para o menu
							break;
							
					}
					break;
					
				case 2:                          //tela de instrucoes do jogo
					printf("COMO JOGAR");
					printf("\n===================================\n");
					printf("instruÃ§oes");                //sem instrucoes ainda
					printf("\n\n");
					
					system("pause");    //comando para o "Pressione qualquer tecla..."
					system("cls");
					break;
					
				case 3:
					printf("QUADRO DE L�DERES");
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
