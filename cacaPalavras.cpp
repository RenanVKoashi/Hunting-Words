	#include<stdio.h>
	#include<stdlib.h>
	#include<locale.h>
	#include<windows.h>
	#define TAM 8
	#define COL1 8
	#define COL2 10
	#define COL3 12

	int pontos[10] = {0}, size = 0;                 //variavel universal no codigo(pode ter o valor alterado pelas funcoes)
	char *lideres[] = {"--------", "--------", "--------", "--------", "--------", "--------", "--------", "--------", "--------", "--------"}; //este pode ser considerado um vetor de strings, e n caracteres. 
	int numeroVetor = sizeof(lideres) / sizeof(lideres[0]);      //quantidade de strings dentro do vetor lideres[]

    void menuCarregamento(int i){	// Funcao que deve ser chamada sempre que a tela de carregamento for necessaria
        
        for(i=0; i<4; i++){
        	
            system("cls");    // Comando Sleep tem a funcao de parar a execucao pelo tempo determinado
            
			printf("o---");
            Sleep(100);
            
            system("cls");
            		
			printf("-o--");
           	Sleep(100);
            		
            system("cls");
            		
			printf("--o-");
           	Sleep(100);
            		
           	system("cls");
            		
			printf("---o");
            Sleep(100);
            		
            system("cls");
            		
           	printf("o---");
            		
           	i++;
           	
        	}
    }
    	
    void limparBufferEntrada(){                //limpar a entrada para o fgets
    	
    	while(getchar() != '\n');
    	
	}
	
	void Leaderboard(char nome[TAM], int pontuacao){
		
		char *auxNome, *novoNome;
		
		novoNome = strdup(nome);   //aloca memoria e copia nome
		
		if(size < 10){
			
			lideres[size] = novoNome;				//realiza o codigo assim ate obter 10 entradas
			pontos[size] = pontuacao;
			
			size++;	
			
		}else{
			
			int menorPontuacao = 0;
				
			for(int j = 1; j < 10; j++){
					
				if(pontos[j] < pontos[menorPontuacao]){                     //encontra a posicao com o menor numero
						
					menorPontuacao = j;
						
				}
			}
			
			if(pontuacao > pontos[menorPontuacao]){
					
				free(lideres[menorPontuacao]);    
					
				pontos[menorPontuacao] = pontuacao;                       //substitui a nova pontuacao e nome
				lideres[menorPontuacao] = novoNome;
					
			}else{
				
				free(novoNome);     //se n for usada a variavel e liberada
				
			}	
		}
		
		for(int a = 0; a < 10; a++){
			
			for(int b = a + 1; b < 10; b++){
				
				if(pontos[b] > pontos[a]){
						
					int aux = pontos[a];
					pontos[a] = pontos[b];            //algoritmo de ordenacao 
					pontos[b] = aux;
						
					auxNome = lideres[a];
					lideres[a] = lideres[b];
					lideres[b] = auxNome;
						
				}				
			}
			
		}
			
	}

	void matriz1(char matriz[][COL1], int pontuacao){               //funcao para escrever as matrizez faceis
		
		int i, j;
		
		printf("   0 1 2 3 4 5 6 7 * X     pontos: %d\n\n", pontuacao);
		
		for(i = 0; i < COL1; i++){
			
			printf("%d  ", i);
			
			for(j = 0; j < COL1; j++){
        
				printf("%c ", matriz[i][j]);
				
			}
			
			printf("\n");
			
		}
		printf("*\nY");
			
	}
	
	void matriz2(char matriz[][COL2], int pontuacao){           //matrizes medias
		
		int i, j;
		
		printf("   0 1 2 3 4 5 6 7 8 9 * X     pontos: %d\n\n", pontuacao);
		
		for(i = 0; i < COL2; i++){
			
			printf("%d  ", i);
			
			for(j = 0; j < COL2; j++){
				
				printf("%c ", matriz[i][j]);
				
			}
			
			printf("\n");
			
		}
		printf("*\nY");
		
	}

	void matriz3(char matriz[][COL3], int pontuacao){            //matrizes dificeis
		
		int i, j;
		
		printf("    0 1 2 3 4 5 6 7 8 9 10 11 * X     pontos: %d\n\n", pontuacao);
		
		for(i = 0; i < COL3; i++){
			
			printf("%d  ", i);
			
			if(i < 10) printf(" ");
			
			for(j = 0; j < COL3; j++){
				
				printf("%c ", matriz[i][j]);
				
			}
			
			printf("\n");
			
		}
		printf("*\nY");
		
	}

	int main(){
		
		setlocale(LC_ALL, "PORTUGUESE");
		
		int codigo, codigoTema, codigoContinuar, comandoJogar, i, pontuacao = 0, iteracao = 0;
		int x1=0, y1=0, x2=0, y2=0, somaVetorPontos = 0, pontuacaoVetorFacilC[8] = {0}, pontuacaoVetorMedioC[10] = {0}, pontuacaoVetorDificilC[12] = {0}, pontuacaoVetorFacilEsportes[8] = {0}, pontuacaoVetorMedioEsportes[10] = {0}, pontuacaoVetorDificilEsportes[12] = {0};
		char leaderboardAuxiliar, *listaPalavrasFacilC[8]={"array", "char", "for", "int", "printf", "return", "scanf", "void"}, *listaPalavrasMedioC[10]={"case", "define", "do", "else", "float", "include", "if", "matrix", "switch", "while"}, *listaPalavrasDificilC[12]={"array", "case", "do", "float", "for", "int", "matrix", "printf", "return", "scanf", "switch", "while"}, *listaPalavrasFacilEsportes[8]={"bola", "gol", "jogador", "quadra", "taça", "tênis", "time", "volei"}, *listaPalavrasMedioEsportes[10]={"atletismo", "ciclismo", "competição", "corrida", "futebol", "maratona", "natação", "partida", "surf", "treino"}, *listaPalavrasDificilEsportes[12]={"basquete", "campo", "equipe", "futsal", "handebol", "medalha", "olimpíadas", "patinação", "skate", "taekwondo", "torcida", "vencedor"};
		char nome[TAM];

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

		for(int z = 0; z < numeroVetor; z++){
			
			lideres[z] = strdup("--------");          //evitar conflitos na troca de variaveis
			
		}

        do{
			
			printf("CAÇA-PALAVRAS");
			printf("\n===================================\n");          //MENU do programa

			printf("1. JOGAR\n2. COMO JOGAR\n3. QUADRO DE LÍDERES\n4. SAIR\n\n");
			printf("---> ");
			scanf("%d", &codigo);
			
			system("cls");
			
            menuCarregamento(i);
			
			system("cls");
			
			while(codigo < 1 || codigo > 4){                        //caso n seja digitado um numero valido entre as opcoes do MENU
				
				printf("CAÇA-PALAVRAS");
				printf("\n===================================\n");
				printf("1. JOGAR\n2. COMO JOGAR\n3. QUADRO DE LÍDERES\n4. SAIR\n\n");
				printf("---> ");
				scanf("%d", &codigo);	
				
				system("cls");	
				
			}
			
			switch(codigo){                      
				
				case 1:   
					printf("JOGAR - DIGITE SEU NOME");  								//tela para inserir nome
					printf("\n===================================\n");
					printf("---> ");
					limparBufferEntrada();                                //fgets apos um scanf causa problema na entrada do fgets
					fgets(nome, sizeof(nome), stdin);
					
					if(nome[strlen(nome) - 1] == '\n') nome[strlen(nome) - 1] = '\0';      //tira o \n da string e mantem o \0
					
					system("cls");
					                             		    
					printf("JOGAR - ESCOLHA UM TEMA");											//tela para selecionar o tema de jogo q vai ser jogado
					printf("\n===================================\n");
					printf("1. PROGRAMAÇÃO\n2. ESPORTES\n3. VOLTAR\n\n");
					printf("---> ");
					scanf("%d", &codigoTema);
					
					system("cls");
					
					while(codigoTema < 1 || codigoTema > 3){             //caso n seja digitado um numero valido entre as opcoes
						
						printf("JOGAR - ESCOLHA UM TEMA");
						printf("\n===================================\n");
						printf("1. PROGRAMAÇÃO\n2. ESPORTES\n3. VOLTAR\n\n");
						printf("---> ");
						scanf("%d", &codigoTema);
					
						system("cls");
						
					}
					
					switch(codigoTema){                     
						
						case 1:
							do{
								
								system("cls");
								
								matriz1(matrizFacilC, pontuacao);
								printf("\n\nPalavras: \n");
								for(i=0; i<8; i++){
									if(i==4) printf("\n");
									if(pontuacaoVetorFacilC[i]==1){
										printf("\033[0;32m");
										printf("%s ", listaPalavrasFacilC[i]);
										printf("\033[0m");
									}else{
										printf("\033[0;31m");
										printf("%s ", listaPalavrasFacilC[i]);
										printf("\033[0m");
									}
								}
								
								printf("\n\nDigite a coordenada X da primeira letra:\n");
								printf("---> ");
								scanf("%d", &x1);
								printf("Digite a coordenada Y da primeira letra:\n");
								printf("---> ");
								scanf("%d", &y1);
								
								printf("Digite a coordenada X da ultima letra:\n");
								printf("---> ");
								scanf("%d", &x2);
								printf("Digite a coordenada Y da ultima letra:\n");
								printf("---> ");
								scanf("%d", &y2);
								
								if((x1==7 && y1==0) && (x2==7 && y2==4)){
									pontuacaoVetorFacilC[0]=1;				//array
								}
								if((x1==0 && y1==0) && (x2==0 && y2==3)){
									pontuacaoVetorFacilC[1]=1;				//char
								}
								if((x1==1 && y1==7) && (x2==3 && y2==5)){
									pontuacaoVetorFacilC[2]=1;				//for
								}
								if((x1==5 && y1==0) && (x2==5 && y2==2)){
									pontuacaoVetorFacilC[3]=1;				//int
								}
								if((x1==2 && y1==0) && (x2==7 && y2==5)){
									pontuacaoVetorFacilC[4]=1;				//printf
								}
								if((x1==0 && y1==4) && (x2==5 && y2==4)){
									pontuacaoVetorFacilC[5]=1;				//return
								}
								if((x1==2 && y1==3) && (x2==6 && y2==3)){
									pontuacaoVetorFacilC[6]=1;				//scanf
								}
								if((x1==3 && y1==0) && (x2==6 && y2==0)){
									pontuacaoVetorFacilC[7]=1;				//void
								}
								
								somaVetorPontos = 0;
								pontuacao = 0;
								for(i=0; i<8; i++){
									somaVetorPontos += pontuacaoVetorFacilC[i];
									pontuacao += pontuacaoVetorFacilC[i] * 100;
								}
								
						}while(somaVetorPontos != 8);
						
						do{
							system("cls");
							printf("VOCÊ ENCONTROU TODAS AS PALAVRAS!");
							printf("\n===================================\n");
							printf("PRÓXIMO NÍVEL?\n1. SIM\n2. NÃO\n\n");
							printf("---> ");
							scanf("%d", &codigoContinuar);
					
							if(codigoContinuar < 1 || codigoContinuar > 2){
								
								printf("\nDigite um comando válido.");
								Sleep(2000);
								
							}
							
						}while(codigoContinuar < 1 || codigoContinuar > 2);
											
							if(codigoContinuar == 1){
								
								do{
									
								system("cls");
								
								matriz2(matrizMedioC, pontuacao);
								printf("\n\nPalavras: \n");
								for(i=0; i<10; i++){
									if(i==5) printf("\n");
									if(pontuacaoVetorMedioC[i]==1){
										printf("\033[0;32m");
										printf("%s ", listaPalavrasMedioC[i]);
										printf("\033[0m");
									}else{
										printf("\033[0;31m");
										printf("%s ", listaPalavrasMedioC[i]);
										printf("\033[0m");
									}
								}
								
								printf("\nDigite a coordenada X da primeira letra:\n");
								printf("---> ");
								scanf("%d", &x1);
								printf("Digite a coordenada Y da primeira letra:\n");
								printf("---> ");
								scanf("%d", &y1);
								
								printf("Digite a coordenada X da ultima letra:\n");
								printf("---> ");
								scanf("%d", &x2);
								printf("Digite a coordenada Y da ultima letra:\n");
								printf("---> ");
								scanf("%d", &y2);
								
								if((x1==4 && y1==1) && (x2==4 && y2==4)){
									pontuacaoVetorMedioC[0]=1;				//case
								}
								if((x1==3 && y1==3) && (x2==8 && y2==8)){
									pontuacaoVetorMedioC[1]=1;				//define
								}
								if((x1==8 && y1==0) && (x2==8 && y2==1)){
									pontuacaoVetorMedioC[2]=1;				//do
								}
								if((x1==6 && y1==2) && (x2==9 && y2==2)){
									pontuacaoVetorMedioC[3]=1;				//else
								}
								if((x1==0 && y1==4) && (x2==4 && y2==8)){
									pontuacaoVetorMedioC[4]=1;				//float
								}
								if((x1==1 && y1==2) && (x2==1 && y2==8)){
									pontuacaoVetorMedioC[5]=1;				//include
								}
								if((x1==0 && y1==0) && (x2==1 && y2==1)){
									pontuacaoVetorMedioC[6]=1;				//if
								}
								if((x1==2 && y1==8) && (x2==7 && y2==8)){
									pontuacaoVetorMedioC[7]=1;				//matrix
								}
								if((x1==4 && y1==3) && (x2==9 && y2==3)){
									pontuacaoVetorMedioC[8]=1;				//switch
								}
								if((x1==4 && y1==6) && (x2==8 && y2==6)){
									pontuacaoVetorMedioC[9]=1;				//while
								}
								
								somaVetorPontos = 0;
								pontuacao = 800;
								for(i=0; i<10; i++){
									somaVetorPontos += pontuacaoVetorMedioC[i];
									pontuacao += pontuacaoVetorMedioC[i] * 200;
								}
								
						}while(somaVetorPontos!=10);
						
						do{
							system("cls");
							printf("VOCÊ ENCONTROU TODAS AS PALAVRAS!");
							printf("\n===================================\n");
							printf("PRÓXIMO NÍVEL?\n1. SIM\n2. NÃO\n\n");
							printf("---> ");
							scanf("%d", &codigoContinuar);
					
							if(codigoContinuar < 1 || codigoContinuar > 2){
								
								printf("\nDigite um comando válido.");
								Sleep(2000);
								
							}
							
						}while(codigoContinuar < 1 || codigoContinuar > 2);
								
								if(codigoContinuar == 1){
								
									do{
									system("cls");
										
									matriz3(matrizDificilC, pontuacao);
									printf("\n\nPalavras: \n");
									for(i=0; i<12; i++){
										if(i==6) printf("\n");
										if(pontuacaoVetorDificilC[i]==1){
											printf("\033[0;32m");
											printf("%s ", listaPalavrasDificilC[i]);
											printf("\033[0m");
										}else{
											printf("\033[0;31m");
											printf("%s ", listaPalavrasDificilC[i]);
											printf("\033[0m");
										}
									}
								
									printf("\nDigite a coordenada X da primeira letra:\n");
									printf("---> ");
									scanf("%d", &x1);
									printf("Digite a coordenada Y da primeira letra:\n");
									printf("---> ");
									scanf("%d", &y1);
									
									printf("Digite a coordenada X da ultima letra:\n");
									printf("---> ");
									scanf("%d", &x2);
									printf("Digite a coordenada Y da ultima letra:\n");
									printf("---> ");
									scanf("%d", &y2);
								
									if((x1==5 && y1==10) && (x2==5 && y2==6)){
										pontuacaoVetorDificilC[0]=1;				//array
									}
									if((x1==10 && y1==10) && (x2==7 && y2==10)){
										pontuacaoVetorDificilC[1]=1;				//case
									}
									if((x1==1 && y1==4) && (x2==0 && y2==5)){
										pontuacaoVetorDificilC[2]=1;				//do
									}
									if((x1==3 && y1==0) && (x2==3 && y2==4)){
										pontuacaoVetorDificilC[3]=1;				//float
									}
									if((x1==0 && y1==4) && (x2==0 && y2==6)){
										pontuacaoVetorDificilC[4]=1;				//for
									}
									if((x1==11 && y1==5) && (x2==11 && y2==7)){
										pontuacaoVetorDificilC[5]=1;				//int
									}
									if((x1==6 && y1==10) && (x2==1 && y2==10)){
										pontuacaoVetorDificilC[6]=1;				//matrix
									}
									if((x1==7 && y1==4) && (x2==2 && y2==4)){
										pontuacaoVetorDificilC[7]=1;				//printf
									}
									if((x1==2 && y1==8) && (x2==7 && y2==3)){
										pontuacaoVetorDificilC[8]=1;				//return
									}
									if((x1==10 && y1==5) && (x2==10 && y2==1)){
										pontuacaoVetorDificilC[9]=1;				//scanf
									}
									if((x1==6 && y1==1) && (x2==1 && y2==6)){
										pontuacaoVetorDificilC[10]=1;				//switch
									}
									if((x1==7 && y1==6) && (x2==7 && y2==10)){
										pontuacaoVetorDificilC[11]=1;				//while
									}
								
									somaVetorPontos = 0;
									pontuacao = 2800;
									
									for(i=0; i<12; i++){
									
										somaVetorPontos += pontuacaoVetorDificilC[i];
										pontuacao += pontuacaoVetorDificilC[i] * 300;
								
									}
							
							}while(somaVetorPontos!=12);
							
									system("cls");
									
									printf("VOCÊ FINALIZOU TODOS OS NÍVEIS!");
									printf("\n===================================\n\n");
									printf("PONTUAÇÃO: %dpts\n\n", pontuacao);
									
									Leaderboard(nome, pontuacao);
									pontuacaoVetorFacilC[8] = {0};
									pontuacaoVetorMedioC[10] = {0};
									pontuacaoVetorDificilC[12] = {0};
									pontuacao = 0;
									
									system("pause");
									system("cls");
									
								}else{
									
									Leaderboard(nome, pontuacao);
									pontuacaoVetorFacilC[8] = {0};
									pontuacaoVetorMedioC[10] = {0};
									pontuacao = 0;
									
									system("cls");
									break;
									
								}
								
							}else{
								
								Leaderboard(nome, pontuacao);
								pontuacaoVetorFacilC[8] = {0};
								pontuacao = 0;
								
								system("cls");
								break;
								
							}
							break;
							
						case 2:
                            do{
								
								system("cls");
								
								matriz1(matrizFacilEsportes, pontuacao);
								printf("\n\nPalavras: \n");
								for(i=0; i<8; i++){
									if(i==4) printf("\n");
									if(pontuacaoVetorFacilEsportes[i]==1){
										printf("\033[0;32m");
										printf("%s ", listaPalavrasFacilEsportes[i]);
										printf("\033[0m");
									}else{
										printf("\033[0;31m");
										printf("%s ", listaPalavrasFacilEsportes[i]);
										printf("\033[0m");
									}
								}
								
								printf("\n\nDigite a coordenada X da primeira letra:\n");
								printf("---> ");
								scanf("%d", &x1);
								printf("Digite a coordenada Y da primeira letra:\n");
								printf("---> ");
								scanf("%d", &y1);
								
								printf("Digite a coordenada X da ultima letra:\n");
								printf("---> ");
								scanf("%d", &x2);
								printf("Digite a coordenada Y da ultima letra:\n");
								printf("---> ");
								scanf("%d", &y2);
								
								if((x1==1 && y1==3) && (x2==4 && y2==6)){
									pontuacaoVetorFacilEsportes[0]=1;				//bola
								}
								if((x1==5 && y1==1) && (x2==7 && y2==1)){
									pontuacaoVetorFacilEsportes[1]=1;				//gol
								}
								if((x1==0 && y1==0) && (x2==0 && y2==6)){
									pontuacaoVetorFacilEsportes[2]=1;				//jogador
								}
								if((x1==7 && y1==2) && (x2==7 && y2==7)){
									pontuacaoVetorFacilEsportes[3]=1;				//quadra
								}
								if((x1==2 && y1==7) && (x2==5 && y2==7)){
									pontuacaoVetorFacilEsportes[4]=1;				//taça
								}
								if((x1==2 && y1==3) && (x2==6 && y2==3)){
									pontuacaoVetorFacilEsportes[5]=1;				//tênis
								}
								if((x1==3 && y1==0) && (x2==3 && y2==3)){
									pontuacaoVetorFacilEsportes[6]=1;				//time
								}
								if((x1==1 && y1==7) && (x2==5 && y2==3)){
									pontuacaoVetorFacilEsportes[7]=1;				//volei
								}
								
								somaVetorPontos = 0;
								pontuacao = 0;
								for(i=0; i<8; i++){
									somaVetorPontos += pontuacaoVetorFacilEsportes[i];
									pontuacao += pontuacaoVetorFacilEsportes[i] * 100;
								}
						}while(somaVetorPontos != 8);
						

                            do{
                            	
								system("cls");
								printf("VOCÊ ENCONTROU TODAS AS PALAVRAS!");
								printf("\n===================================\n");
								printf("PRÓXIMO NÍVEL?\n1. SIM\n2. NÃO\n\n");
								printf("---> ");
								scanf("%d", &codigoContinuar);
					
								if(codigoContinuar < 1 || codigoContinuar > 2){
								
									printf("\nDigite um comando válido.");
									Sleep(2000);
								
								}
							
							}while(codigoContinuar < 1 || codigoContinuar > 2);

                            if(codigoContinuar == 1){

                                do{
									
								system("cls");
								
								matriz2(matrizMedioEsportes, pontuacao);
								printf("\n\nPalavras: \n");
								for(i=0; i<10; i++){
									if(i==5) printf("\n");
									if(pontuacaoVetorMedioEsportes[i]==1){
										printf("\033[0;32m");
										printf("%s ", listaPalavrasMedioEsportes[i]);
										printf("\033[0m");
									}else{
										printf("\033[0;31m");
										printf("%s ", listaPalavrasMedioEsportes[i]);
										printf("\033[0m");
									}
								}
								
								printf("\nDigite a coordenada X da primeira letra:\n");
								printf("---> ");
								scanf("%d", &x1);
								printf("Digite a coordenada Y da primeira letra:\n");
								printf("---> ");
								scanf("%d", &y1);
								
								printf("Digite a coordenada X da ultima letra:\n");
								printf("---> ");
								scanf("%d", &x2);
								printf("Digite a coordenada Y da ultima letra:\n");
								printf("---> ");
								scanf("%d", &y2);
								
								if((x1==9 && y1==0) && (x2==9 && y2==8)){
									pontuacaoVetorMedioEsportes[0]=1;				//atletismo
								}
								if((x1==0 && y1==0) && (x2==7 && y2==0)){
									pontuacaoVetorMedioEsportes[1]=1;				//cliclismo
								}
								if((x1==0 && y1==0) && (x2==9 && y2==9)){
									pontuacaoVetorMedioEsportes[2]=1;				//competição
								}
								if((x1==0 && y1==2) && (x2==6 && y2==8)){
									pontuacaoVetorMedioEsportes[3]=1;				//corrida
								}
								if((x1==1 && y1==8) && (x2==7 && y2==2)){
									pontuacaoVetorMedioEsportes[4]=1;				//futebol
								}
								if((x1==0 && y1==9) && (x2==7 && y2==9)){
									pontuacaoVetorMedioEsportes[5]=1;				//maratona
								}
								if((x1==8 && y1==3) && (x2==8 && y2==9)){
									pontuacaoVetorMedioEsportes[6]=1;				//natação
								}
								if((x1==3 && y1==3) && (x2==3 && y2==9)){
									pontuacaoVetorMedioEsportes[7]=1;				//partida
								}
								if((x1==5 && y1==0) && (x2==5 && y2==3)){
									pontuacaoVetorMedioEsportes[8]=1;				//surf
								}
								if((x1==0 && y1==3) && (x2==0 && y2==8)){
									pontuacaoVetorMedioEsportes[9]=1;				//treino
								}
								
								somaVetorPontos = 0;
								pontuacao = 800;
								for(i=0; i<10; i++){
									somaVetorPontos += pontuacaoVetorMedioEsportes[i];
									pontuacao += pontuacaoVetorMedioEsportes[i] * 200;
								}
						}while(somaVetorPontos!=10);

                                do{
                            	
									system("cls");
									printf("VOCÊ ENCONTROU TODAS AS PALAVRAS!");
									printf("\n===================================\n");
									printf("PRÓXIMO NÍVEL?\n1. SIM\n2. NÃO\n\n");
									printf("---> ");
									scanf("%d", &codigoContinuar);
					
									if(codigoContinuar < 1 || codigoContinuar > 2){
								
										printf("\nDigite um comando válido.");
										Sleep(2000);
								
									}
							
								}while(codigoContinuar < 1 || codigoContinuar > 2);

                                if(codigoContinuar == 1){

                                    do{
									system("cls");
										
									matriz3(matrizDificilEsportes, pontuacao);
									printf("\n\nPalavras: \n");
									for(i=0; i<12; i++){
										if(i==6) printf("\n");
										if(pontuacaoVetorDificilEsportes[i]==1){
											printf("\033[0;32m");
											printf("%s ", listaPalavrasDificilEsportes[i]);
											printf("\033[0m");
										}else{
											printf("\033[0;31m");
											printf("%s ", listaPalavrasDificilEsportes[i]);
											printf("\033[0m");
										}
									}
								
									printf("\nDigite a coordenada X da primeira letra:\n");
									printf("---> ");
									scanf("%d", &x1);
									printf("Digite a coordenada Y da primeira letra:\n");
									printf("---> ");
									scanf("%d", &y1);
									
									printf("Digite a coordenada X da ultima letra:\n");
									printf("---> ");
									scanf("%d", &x2);
									printf("Digite a coordenada Y da ultima letra:\n");
									printf("---> ");
									scanf("%d", &y2);
								
									if((x1==10 && y1==10) && (x2==10 && y2==3)){
										pontuacaoVetorDificilEsportes[0]=1;				//basquete
									}
									if((x1==5 && y1==11) && (x2==9 && y2==11)){
										pontuacaoVetorDificilEsportes[1]=1;				//campo
									}
									if((x1==11 && y1==6) && (x2==11 && y2==11)){
										pontuacaoVetorDificilEsportes[2]=1;				//equipe
									}
									if((x1==6 && y1==2) && (x2==11 && y2==2)){
										pontuacaoVetorDificilEsportes[3]=1;				//futsal
									}
									if((x1==9 && y1==3) && (x2==2 && y2==3)){
										pontuacaoVetorDificilEsportes[4]=1;				//handebol
									}
									if((x1==4 && y1==8) && (x2==10 && y2==2)){
										pontuacaoVetorDificilEsportes[5]=1;				//medalha
									}
									if((x1==1 && y1==2) && (x2==10 && y2==11)){
										pontuacaoVetorDificilEsportes[6]=1;				//olímpiadas
									}
									if((x1==0 && y1==10) && (x2==0 && y2==2)){
										pontuacaoVetorDificilEsportes[7]=1;				//patinação
									}
									if((x1==8 && y1==1) && (x2==4 && y2==1)){
										pontuacaoVetorDificilEsportes[8]=1;				//skate
									}
									if((x1==1 && y1==9) && (x2==9 && y2==9)){
										pontuacaoVetorDificilEsportes[9]=1;				//taekwondo
									}
									if((x1==1 && y1==9) && (x2==1 && y2==3)){
										pontuacaoVetorDificilEsportes[10]=1;			//torcida
									}
									if((x1==4 && y1==0) && (x2==11 && y2==0)){
										pontuacaoVetorDificilEsportes[11]=1;			//vencedor
									}
								somaVetorPontos = 0;
								pontuacao = 2800;
								for(i=0; i<12; i++){
									somaVetorPontos += pontuacaoVetorDificilEsportes[i];
									pontuacao += pontuacaoVetorDificilEsportes[i] * 300;
								}
							}while(somaVetorPontos!=12);

                                    system("cls");

                                    printf("VOCÊ FINALIZOU TODOS OS NÍVEIS!");
                                    printf("\n===================================\n\n");
                                    printf("PONTUAÇÃO: %dpts\n\n", pontuacao);
                                    
                                    Leaderboard(nome, pontuacao);
                                    pontuacaoVetorFacilEsportes[8] = {0};
                                    pontuacaoVetorMedioEsportes[10] = {0};
                                    pontuacaoVetorDificilEsportes[12] = {0};
                                    pontuacao = 0;

                                    system("pause");
                                    system("cls");

                                }else{
                                	
                                	Leaderboard(nome, pontuacao);
                                	pontuacaoVetorFacilEsportes[8] = {0};
                                	pontuacaoVetorMedioEsportes[10] = {0};
                                	pontuacao = 0;

                                    system("cls");
                                    break;

                                }

                            }else{
                            	
                            	Leaderboard(nome, pontuacao);
                            	pontuacaoVetorFacilEsportes[8] = {0};
                            	pontuacao = 0;

                                system("cls");
                                break;

                            }
							break;
						
						case 3:                           //botao de VOLTAR para o menu
							Leaderboard(nome, pontuacao);
							break;
							
					}
					break;
					
				case 2:                          //tela de instrucoes do jogo
					printf("COMO JOGAR");
					printf("\n===================================\n");
					printf("O jogo é constituído por dois temas de palavras, cada tema com três níveis diferentes."); 
					printf("\nO jogador deverá inserir as coordenadas da primeira letra e as coordenada da ultima letra da palavra encontrada, sendo X o valor horizontal e Y o valor vertical.");
					printf("\nO nível estará completo quando todas as palavras listadas forem encontradas. Após todas as palavras serem encontradas, será dada a opção de prosseguir para o próximo nível ao jogador.");
					printf("\nCaso o jogador queira terminar o jogo cedo, deverá *...* mantendo assim a pontuação obtida até o momento.");                //sem instrucoes ainda
					printf("\n\n");
					
					system("pause");    //comando para o "Pressione qualquer tecla..."
					system("cls");
					break;
					
				case 3:
					
					printf("QUADRO DE LÍDERES");
					printf("\n===================================\n");
					
					for(int l = 0; l < numeroVetor; l++){
						if(l+1<10){
							printf("0%d - %s", l + 1, lideres[l]);
						}else{
							printf("%d - %s", l + 1, lideres[l]);
						}
						for(i=0; i<26-strlen(lideres[l]); i++){
							printf(" ");
						}
						printf("%dpts\n", pontos[l]);
						
					}
					
					printf("\n");
					
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
