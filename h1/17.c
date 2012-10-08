/*
					ТУЕС (Технологично училище Електронни системи към ТУ София)
										http://www.elsys-bg.org/

Да се разработи програма, която изисква от потребителя да въведе число x, където x e интервала (0;1). 
Да се намери сумата от сбора на реципрочните стойности за всеки две twin primes. Развитието да продължи 
докато отношението не стане по-малко то x.										
*/

#include<stdio.h>

int main()
{
	float x, z, y, count = 0.0, p;
	int n, i, c ;
	
	printf("Vavedete chisloto\n");
	scanf("%f",&x);
	
	for(i = 3, n = 0; ((count > x)||(count == 0.0)); i++)
	{      
		for ( c = 2 ; c <= i - 1 ; c++ )
		{
			if ( i%c == 0 )
			{
         		   break;
			}	  
      	}
      	
		if ( c == i )
      	{         
			if (n==0)
			{			
				z = i;
				++n;	
				printf("Z -> %f\n",z);
			}
      		
			if ((n==1)&&(i==(z+2.0)))
			{			
				p = i;			
				printf("Y -> %f\n",p);
				count = ((1.0/z)+(1.0/p)) + count;
				printf("V momenta sumanta e -> %f\n",count);			
				z = i;
				printf("Z se preizchisli na -> %f\n",z);
			}
			
			if ((i>(z+2.0))) 
			{
				z = i;
				printf("Izchistvam\n");
				printf("Z -> %f\n",z);	
				printf("Y -> %f\n",p);
			}
    	}
      	i++;
	}	 	
	
	printf("Obshto -> %f\n",count);

	return 0;
}
//1 - x<y
//2 - x<y
//3 - x<y
//4 - x<y
//5 - 0<x<10
//6 - 0<x<10
//7 - 0<=x<10
//8 - 0<=x<10
//9 - 0<x<1
//10 - x>0, y>0, w>0, h>0
//11 - 0<x<10
//12 - 0<x<10
//13 - 0<x<10
//14 - 0<x<10
//15 - 0<x<10
//16 - x>=0
//17 - 0<x<0
