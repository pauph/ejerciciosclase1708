#include<stdio.h>

int main()
{
	int i=1;
	while (i==1)
		{
		int c;
		printf("Que caso quiere realizar: ");
		scanf("%d", &c);
	
		switch(c)
			{
		
				case 1:
					printf("Hola\n");
				break;
		
				case 2:
					printf("Adios\n");
				break;
		
				case 3:
					printf("Dia\n");
				break;
		
				case 4:
					printf("Noche\n");
				break;
		
				case 5:
					printf("Desayuno\n");
				break;
		
				default:
					printf("Cena\n");
					i=6;
				break;
			
			}
	
		}
	
	
	return 0;	
}

