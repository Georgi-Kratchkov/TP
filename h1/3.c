/*
					ТУЕС (Технологично училище Електронни системи към ТУ София)
										http://www.elsys-bg.org/
										
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y,
където x < y. Да се намерят и изведат всички прости числа завършващи на 3 в интервал [x,y].
*/

#include<stdio.h>
 
main()
{
	int n,y, i = 3, count, c;
 
	printf("Vavedete parvoto chislo\n");
	scanf("%d",&y);
	printf("Vavedete vtoroto chislo\n");
	scanf("%d",&n);
 
	for ( count = 2 ; count <= n ;  )
	{
		for ( c = 2 ; c <= i - 1 ; c++ )
		{
			if ( i%c == 0 )
				break;
		}
		if ( c == i )
		{
			if (((i>=y)&&(i<=n))&&(i%10==3)) 
			{
				printf("%d\n",i);
			}
			count++;
		}
		i++;
	}         
 
	return 0;
}
