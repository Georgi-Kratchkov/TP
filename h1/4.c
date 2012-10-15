/*
					ТУЕС (Технологично училище Електронни системи към ТУ София)
										http://www.elsys-bg.org/
											11 Б клас 
											Номер 9
											Георги Кръчков
										
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y,
където x < y. Да се намерят и изведат всички числа на Фибоначи в интервала [x, y].
*/

#include<stdio.h>

int y;
int main()
{
	int x, i;
 
	printf("Vavedete parvoto chislo\n");
	scanf("%d",&x);
	printf("Vavedete vtoroto chislo\n");
	scanf("%d",&y);

	for(i = x; i <= y; i++)
	{
		fibonacci(i);	
	}

	return 0;
}
int fibonacci(int n)
{

	int a = 0;
	int b = 1;
	int sum;
	int i;

	for (i=0;i<n;i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	if (a<=y) 
	{
		printf("%d\n",a);
	}    
	
	return 0;
}
