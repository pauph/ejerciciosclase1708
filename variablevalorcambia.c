#include <stdio.h>


int main(){
	
	int valor = 10;
	printf("valor = %d \n", valor);
	valor = 25;
	printf("valor = %d \n", valor); //al ser variable puede cambiar, es por eso que en la consola primero imprime el 10 y luego el 25
	
	float parcial1 = 9.5;
	float parcial2 = 8.5;
	float temp;
	
	printf("parcial 1 %f\n ", parcial1);
	printf("parcial 2 %f\n ", parcial2);
	
	temp = parcial1 ; //parcial1 se copio en temp y ahora vale 9.5
	printf("temp %f\n ", temp);
	parcial1 = parcial2; //parcial2 se copio en parcial1 y ahora vale 8.5
	printf("parcial 1 %f\n ", parcial1); 
	parcial2 = temp; //temp se copio en parcial2 y ahora vale 9.5
	printf("parcial 2 %f\n ", parcial2); 
	

	
	
	
	/*
	int numero = 5;
	printf("valor %d \n", numero); //antes de la operación
	
	numero = numero +3;
	printf("valor %d \n", numero); //después de la operación
	
	numero = numero +1; // es lo mismo que poner ++
	printf("valor %d \n", numero); //despues de la operación
	*/
	
	return 0;
}
