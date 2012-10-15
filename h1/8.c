/*
					ТУЕС (Технологично училище Електронни системи към ТУ София)
										http://www.elsys-bg.org/
											11 Б клас 
											Номер 9
											Георги Кръчков
										
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<=x<10. 
Да се инициализира масив от 10 елемента. Да се намерят първите 10 числа на Фибоначи в [0; +?), които се 
делят на x без остатък. Намерените стойности да се зададат като стойности на елементите в масива. 
Елементите на масива да се изведат на стандартния изход.
*/

#include<stdio.h>

int y; 
int x = 0;
int main()
{
	int  i;
	unsigned long int arr[11];
 
	printf("Vavedete parvoto chislo\n");
	scanf("%d",&y);
	
	for(i = 0; x <= 10; i++)
	{
		arr[x-1] = fibonacci(i);	
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("%lu\n",arr[i]);	
	}

	return 0;
}
int fibonacci(int n)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int sum;
	int i;

	for (i=0;i<n;i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	
	if ((a%y == 0)&&(a > 0))
	{
		++x;
        return a;
	}    
}
