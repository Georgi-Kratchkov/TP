/*
					���� (������������ ������� ���������� ������� ��� �� �����)
										http://www.elsys-bg.org/
										
�� �� ��������� ��������, ����� ������� �� ����������� �� ������ ����������� �����, x, 
������ 0 < x < 10. �� �� ������������� ������ �� 10 ��������. ����������� �� ���������� �� ������ 
�� �� ����� �� ������� �� ������� �� ��������. �� �� ������ �������, ���� ����� �� �� ������� � 
�������� ��� � ������ �� �� ������.
*/

#include<stdio.h>
#include<math.h>
 
main()
{
	int x,i;
	float arr[10];
	float a = 0.0;

	printf("Vavedete chisloto\n");
	scanf("%d",&x);
	
	for(i = 0; i < 10; i++)
	{
		arr[i] = cos(i);
	}
	
	for(i=0; i < 10; i++)
	{
		printf("Arr{%d} : %f\n", i, arr[i]);
	}
	
	printf("--------------------------------\n");
	bubbleSort(arr,10);
	
	for(i=0; i < 10; i++)
	{
		printf("Arr{%d} : %f\n", i, arr[i]);
	} 

	return 0;
}
void bubbleSort(float numbers[], int array_size)
{
	int i, j;
	float temp;
 
	for (i = (array_size - 1); i > 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			if (numbers[j-1] < numbers[j])
			{
				temp = numbers[j-1];
				numbers[j-1] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}
