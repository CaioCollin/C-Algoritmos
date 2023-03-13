#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;
#define TAM 8
#define MAX 8
//Insertion Sort
void Insertion(int vetor[]){
	int i , aux, posicao;
	printf("Algoritmo desorganizado Insertion Sort : \n");
	for(i = 0; i < TAM ; i++){
		printf("%d  - ", vetor[i]);
	}
	
	for(i = 1 ; i < TAM  ; i++){	
		posicao = i;
		while(posicao != 0 , vetor[posicao] < vetor[posicao - 1]){
			aux = vetor[posicao -1];
			vetor[posicao -1 ] = vetor[posicao];
			vetor[posicao] = aux; 			
			posicao --;
		}
	}

	printf("\n \n Algoritmo organizado : \n");
	for(i = 0; i < TAM ; i++){
		printf("%d  - ", vetor[i]);
	}
}
 
//Bluble Sort
void Bluble(int vetor[]){
	int i , j , aux ;
	printf("\n \n Algoritmo Desorganizado bluble sort : \n");
	for(i = 0; i < TAM ; i++){
		printf("%d  - ", vetor[i]);
	}
	
	for(i = 0; i < MAX ; i++){
		for(j = 0;  j < MAX ; j++){	
			if(vetor[j] > vetor[j+1]){
				aux = vetor[j + 1];
				vetor[j + 1] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	
	printf("\n \n Algoritmo organizado bluble sort : \n");
	for(i = 0; i < TAM ; i++){
		printf("%d  - ", vetor[i]);
	}
}

//Quick sort 
static int particao(int vetor[], int esquerda, int direita){
        int meio = (int) (esquerda + direita) /2;
        int pivot = vetor[meio];
        int i = esquerda - 1;
        int j = direita + 1;
        
        while(true){
            do{
                i++;
            }while(vetor[i] < pivot);
            do{
                j--;
            }while(vetor[j] > pivot);
            
            if(i >= j){
                return j;
            }
            int aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;                
            
        }
    }
static void quick(int vetor[] , int esq , int dir){
        if(esq < dir){
            int p = particao(vetor , esq , dir);
            quick(vetor,esq , p);
            quick(vetor,p+1,dir);
        }
}
    
int main(){
	
	int vetor[TAM] = {7,5,3,9,1,18,99,0};

    printf("\n\n* QUICK SORT \n\n");
    quick(vetor,0 , TAM-1);      
	for(int i = 0; i < TAM ; i++){
		
		printf("%d  - ", vetor[i]);
	}

	printf("\n\n* BLUBLE SORT");
	int bb[TAM] = {12,50,30,90,100,18,99,0};
	Bluble(bb);
		
	printf("\n\n* INSERTION SORT \n\n");	
	int insertion[TAM] = {9,3,7,88,12,4,18,4};
	Insertion(insertion);
	
}

