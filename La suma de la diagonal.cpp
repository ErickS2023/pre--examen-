/*
//Suma de diagonal
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n,i,j,suma;
	srand(time(NULL));
	printf("ingrese la longitud de la matriz:\n");
	scanf("%d",&n);
	int A[n][n];
	printf("Matriz A:\n");
	for(i=0; i<n; i++){
		for (j=0; j<n; j++){
			A[i][j]=rand() % (9 + 1 - 1) + 1;
			printf("%d ",A[i][j]);
			if(i==j)
			suma+=A[i][j];
		}
		printf("\n");
	}
	printf("La suma de la diagonal principal es: %d", suma);
	return 0;
}


// La matriz da 0 con 1 pero no da la suma de la misma 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n,i,j,suma;
	srand(time(NULL));
	printf("ingrese la longitud de la matriz:\n");
	scanf("%d",&n);
	int A[n][n];
	printf("Matriz aleatoria:\n");
	for(i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (i==j)
			A[i][j]=1;
			else
			A[i][j]=0;
			printf("%d ", A[i][j]);
		suma+=A [i][j];
		}
		printf("\n");
	}
	printf("La suma de la diagonal principal es: %d", suma);
	return 0;
}

|*/
//Matriz transpuesta 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n,i,j,suma;
	srand(time(NULL));
	printf("ingresar el valor de la longitud de la matriz:\n");
	scanf("%d", &n);
	int A[n][n];
	printf("Matriz A:\n");
	for(j=0; j<n; j++){
		A[i][j]=rand()% (9 + 1- 1) + 1;
		printf("%d ", A[i][j]);
	}
	printf("\n");
	printf("Matriz A transpuesta:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ",A [j][i]);
		}
		printf("\n");
	}
	return 0;
}









