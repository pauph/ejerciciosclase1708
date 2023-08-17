#include <stdio.h>

int main(){
	
	int numero = 5;
	printf("valor %d \n", numero); //antes de la operación
	
	numero = numero +3;
	printf("valor %d \n", numero); //después de la operación
	
	numero = numero +1; // es lo mismo que poner ++
	printf("valor %d \n", numero); //despues de la operación
}
