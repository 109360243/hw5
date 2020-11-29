#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(0));
	int counter[11] = { 0 };
	int i;
	for (i = 1; i <= 36000; i++)
	{
		int a = rand() % 6 + 1;
		int b = rand() % 6 + 1;
		int sim = a + b;
		counter[sim - 2]++;

	}
	for (i = 2; i <= 12; i++)
	{
		printf("%d:%d\n", i, counter[i - 2]);
	}
	return 0;
}