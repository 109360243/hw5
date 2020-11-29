#include <stdio.h>
#include <stdlib.h>
int function(int a[5]);
void main()
{
	int i, j, tmp;
	int A[5] = { 26,5,81,7,63 };
	int a = 4;

	for (i = 0; i < a; i++)
	{

		for (j = 0; j < 4; j++)
		{
			if (A[j] > A[j + 1])
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;

			}
			if (A[4] > A[3] && A[4] > A[2] && A[4] > A[1] && A[4] > A[0])
			{
			
				a--;
			}

		}
		

	}
	system("pause");
	int function(int a[5],int *aptr)
	{
		int a[x];
		int n = 5;
		int least = a[1];
		int most = a[n];
		int middle = (least + most) / 2;
		if (middle < a[n / 2])
		{
