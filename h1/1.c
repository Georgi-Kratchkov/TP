/*
					ТУЕС (Технологично училище Електронни системи към ТУ София)
										http://www.elsys-bg.org/
											11 Б клас 
											Номер 9
											Георги Кръчков
										
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, 
където x < y. Да се намери сумата на всички нечетни числа в интервала [x,y].
*/

#include<stdio.h>
 
main()
{
	int x, n = 0, y, i;
 
	printf("Vavedete parvoto chislo\n");
	scanf("%d",&x);
	printf("Vavedete vtoroto chislo\n");
	scanf("%d",&y);

	for(i = x; i <= y; i++)
	{
		if (i%2 == 1) 
		{
			n=n+i;
		}	
	}
	printf("Sumarno: %d\n",n);

	return 0;
}
