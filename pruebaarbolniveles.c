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
	printf("Elige una opcion\n" );
	printf("Arbol de 3 niveles:3\n" );
	printf("Arbol de 5 niveles:5\n" );
	printf("Arbol de 7 niveles:7\n" );
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
				printf("\t\t\t      * ");
				printf("\n\t\t\t     /|\\ ");
				printf("\n\t\t\t    //|\\\\ ");
				printf("\n\t\t\t   ///|\\\\\\ ");
				printf("\n\t\t\t  ////|\\\\\\\\ ");
				printf("\n\t\t\t /////|\\\\\\\\\\ ");
				printf("\n\t\t\t    IIIII ");
			} 
			if(a == 7 )
			{
				printf("arbol de 7 niveles\n" );
				printf("\t\t\t        * ");
				printf("\n\t\t\t       /|\\ ");
				printf("\n\t\t\t      //|\\\\ ");
				printf("\n\t\t\t     ///|\\\\\\ ");
				printf("\n\t\t\t    ////|\\\\\\\\ ");
				printf("\n\t\t\t   /////|\\\\\\\\\\ ");
				printf("\n\t\t\t  //////|\\\\\\\\\\\\ ");
				printf("\n\t\t\t ///////|\\\\\\\\\\\\\\ ");
				printf("\n\t\t\t     IIIIIII ");
			}
			else 
			{
				printf("\nIngresa otro número\n" );
			}
	return 0;
	}
