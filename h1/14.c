﻿/*
					ТУЕС (Технологично училище Електронни системи към ТУ София)
										http://www.elsys-bg.org/
											11 Б клас 
											Номер 9
											Георги Кръчков
									
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. 
Да се инициализира масив от 10 елемента. Да се намери първото просто число в интервала [0; +?) завършващо 
на x и да се запише като първи елемент в масива. Да се намери второто просто число в интервала [0;  +?) 
завършващо на x и да се запише като втори елемент в масива. Аналогично да се намерят първите N прости 
числа в интервала [0;  +?) и да се запишат като елемент N в масива. Масивът да се изведе на стандартния 
изход.										
*/

#include<stdio.h>
 
main()
{
	int n, i = 3, count, c, x,y;
	int arr[10];
	
	printf("Vavedete chislo\n");
	scanf("%d",&x);

	for ( count = 2 ; count <= 12 ;  )
	{
		for ( c = 2 ; c <= i - 1 ; c++ )
		{
			if ( i%c == 0 )
            break;
		}
		if (( c == i )&&(i%10==x))
		{
			arr[count-2] = i;
			count++;
		}
		i++;
	}         
   
	for (i=0; i<10; i++)
    {
		printf ("Arr[%d]: %d\n",i , arr[i]);
    }
	
	return 0;
}
