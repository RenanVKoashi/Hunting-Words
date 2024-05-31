	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#define TAM 15
	
	int main(){
		
		char nome[TAM], *auxNome, *novoNome;
		char *lideres[] = {"Player", "Player", "Player", "Player", "Player", "Player", "Player", "Player", "Player", "Player"};    //por padrao deixa todos os espacos vazios como player
		int numeroVetor = sizeof(lideres) / sizeof(lideres[0]);      //numero de strings dentro do vetor lideres[]
		int pontos[10] = {0}, pontuacao, size = 0;
		
		for(int s = 0; s < numeroVetor; s++){
			
			lideres[s] = strdup("Player");
			
		}
		
		do{
			
			system("cls");
			
			printf("=========================\n");
		
			for(int i = 0; i < numeroVetor; i++){
			
				printf("%d - %s %dpts\n", i + 1, lideres[i], pontos[i]);        //print do quadro sem nenhuma informacao ainda
			
			}
			
			printf("=========================\n");
			
			printf("Digite seu nome: ");
			fgets(nome, sizeof(nome), stdin);
			
			if(nome[strlen(nome) - 1] == '\n') nome[strlen(nome) - 1] = '\0';      //tira o \n da string e mantem o \0
			
			printf("Pontos: ");
			scanf("%d", &pontuacao);
			
			while(getchar() != '\n');        //comando para pegar os nomes em todas iteracoes
			
			novoNome = strdup(nome);    //aloca memoria e copia o nome
			
			if(size < 10){
				
				lideres[size] = novoNome;             //realiza o codigo assim ate obter 10 entradas
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
					
					free(novoNome);    //libera a memoria do novo nome se este n for usado
					
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
			
		}while(1);           //o programa vai rodar infinitamente
		
		
		
		return 0;
	}
