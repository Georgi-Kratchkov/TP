/*
					ТУЕС (Технологично училище Електронни системи към ТУ София)
										http://www.elsys-bg.org/
		
Да се разработи програма, която изисква от потребителя да въведе число x, където 0<x<1. Да се намери 
числото пи чрез следното развитие в ред: 4-4/3+4/5-4/7+4/9-4/11+...4/N. Развитието в ред спира при 
4/N<x. Получената стойност за пи да се изведе на екрана.		
*/

#include<stdio.h>
float z = 4.0;
main()
{
	float x, y;
	int boolean = 1;  	
	
	printf("Vavedete parvoto chislo\n");
	scanf("%f",&x);
   
	for (y = 3; 4/y >= x ;y+=2)
	{
		if (boolean == 1)
		{
			z = z - 4/y;
			boolean = 0;
		}
		else 	
		{
			z = z + 4/y;
			boolean = 1;
		}
	}
	printf ("Poluchenata stoinost za PI e: %f\n",z);
	return 0;
}
