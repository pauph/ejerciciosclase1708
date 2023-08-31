#include<stdio.h>
#include<math.h>

int main()
{
	/*
	int num1;
	
	printf("Escribe un número\n");
	scanf("%d", &num1);
	printf("el número que ingresó es %d", num1); */
	
	int a;
	printf("¿De cuantos niveles quieres el arbol?\n" );
	scanf("%d", &a);
	
	if( a == 3 )
	{
		printf("arbol de 3 niveles\n" );
		printf("\t\t\t    * ");
		printf("\n\t\t\t   /|\\ ");
		printf("\n\t\t\t  //|\\\\ ");
		printf("\n\t\t\t ///|\\\\\\ ");
		printf("\n\t\t\t   III ");
	} 
		else 
			if(a == 5 ) 
			{
				printf("arbol de 5 niveles\n" );
			} 
			if(a == 7 )
			{
				printf("arbol de 7 niveles\n" );
			}
				else 
				{
					printf("\nIngresa otro número\n" );
				}
	return 0;
	}
