#include<stdio.h>
#include<stdlib.h>
int maxnum(int array[]);
int main(void)
{
	int array[4] = { 7,3,12,40 };
	printf("%d", maxnum(array, 0, 2));
	system("pause");
	return 0;
}
int  maxnum(int array[])
{
	
	int max=array[0];
	for (int i = 0; i <4; i++)
	{
			if (array[i] >max )
			{

				max = array[i];
			}
	}
	printf("%d\n", max);
	return  max;
	
}