	#include<stdio.h>
	#include<stdlib.h>
	
	int main(){
		
		int numeros[10] = {0}, newNumber, size = 0;     //newNumber sao os numeros de entrada           size e para q o codigo funcione de um jeito ate os 10 primeiros numeros
		                    							//                                              serem inseridos. depois funciona de outro jeito
		do{
			
			system("cls");                             //limpa a tela a cada loop do codigo
			
			for(int i = 0; i < 10; i++){
			
				printf("%d\n", numeros[i]);           //printf dos numeros
			
			}
			
			printf("============\n");
			printf("Digite um numero: ");         //inserir um novo numero
			scanf("%d", &newNumber);
			
			if(size < 10){
				
				numeros[size] = newNumber;             //enquanto n preencher os 0, so vai substituir eles ate acabarem
				size++;
				
			}else{
				
				int PosMenorNum = 0;
				
				for(int j = 1; j < 10; j++){                                 
					
					if(numeros[j] < numeros[PosMenorNum]) PosMenorNum = j;                  //vai encontrar a POSICAO do menor numero
					
				}
				
				if(newNumber > numeros[PosMenorNum]){
					
					numeros[PosMenorNum] = newNumber;           //depois de encontrar a posicao do menor numero, vai remover ele e colocar o novo numero
					
				}
				
			}
			
			for(int a = 0; a < 10; a++){
				
				for(int b = a + 1; b < 10; b++){
					
					if(numeros[b] > numeros[a]){                   //algoritmo para manter a ordem crescente na tabela
						
						int aux = numeros[a];
						numeros[a] = numeros[b];
						numeros[b] = aux;
						
					}
					
				}
			}
			
		}while(1);
		
		return 0;
	}
