#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <windows.h>
#define COL1 8

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

	float pontuacao( int multiplicador, int codigo){
		#define easy 100
		#define medium 200
		#define hard 300

		float score, formula;

		switch (codigo){

		case 1:
			formula = easy * multiplicador;
			break;
		
		case 2:
			formula = medium * multiplicador;
			break;

		case 3:
			formula = hard * multiplicador;
			break;

		default:
			printf("Não foi possível inicializar o sistema de pontuação, por favor inicie o jogo e selecione uma das dificuldades estabelecidas\n");
			break;		
		}

		/* a partir daqui é especulação de como o jogo vai ser realizado

		//if(acerto = 1){
			//score += formula;
		//}else{
			//printf("Que pena, seu multiplicador voltou a 0!");
			//Sleep(100);
			//printf("¯\_(ツ)_/¯");
			//Sleep(200);
			//system("cls")
		}*/
		

	}	


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
		
		setlocale(LC_ALL, "PORTUGUESE");
		
		int codigo, codigoNvl, comandoJogar, i;
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
			
			printf("CAÃ‡A-PALAVRAS");
			printf("\n===================================\n");          //MENU do programa
			printf("1. JOGAR\n2. COMO JOGAR\n3. SAIR\n\n");
			printf("---> ");
			scanf("%d", &codigo);
			
			system("cls");
			
            menuCarregamento(i);
			
			system("cls");
			
			while(codigo < 1 || codigo > 3){                        //caso n seja digitado um numero valido entre as opcoes do MENU
				
				printf("CAÃ‡A-PALAVRAS");
				printf("\n===================================\n");
				printf("1. JOGAR\n2. COMO JOGAR\n3. SAIR\n\n");
				printf("---> ");
				scanf("%d", &codigo);	
				
				system("cls");	
				
			}
			
			switch(codigo){                      
				
				case 1:                                  		    //tela para selecionar o nvl q vai ser jogado
					printf("JOGAR - ESCOLHA UM NÃVEL");
					printf("\n===================================\n");
					printf("1. FÃCIL\n2. MÃ‰DIO\n3. DÃFICIL\n4. VOLTAR\n\n");
					printf("---> ");
					scanf("%d", &codigoNvl);
					
					system("cls");
					
					while(codigoNvl < 1 || codigoNvl > 4){             //caso n seja digitado um numero valido entre as opcoes
						
						printf("JOGAR - ESCOLHA UM NÃVEL");
						printf("\n===================================\n");
						printf("1. FÃCIL\n2. MÃ‰DIO\n3. DÃFICIL\n4. VOLTAR\n\n");
						printf("---> ");
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
							Matriz1(matrizMedio);           //criar matriz de nvl medio
							scanf("%d", &comandoJogar);         //sem codigo para jogar ainda
							
							system("cls");
							break;
							
						case 3:
							Matriz1(matrizDificil);              // criar matriz de nvl dificil
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
					printf("instruÃ§oes");                //sem instrucoes ainda
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
