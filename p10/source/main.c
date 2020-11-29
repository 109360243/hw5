#include <stdio.h>
#include <stdlib.h>
void cubebyreference(int *nPtr);
int main(void)
{
	int number = 5;
	printf("the original value of number is %d", number);
	cubebyreference(&number);
	printf("\nthe new value of number is %d\n", number);
	system("pause");
	return 0;

}
void cubebyreference(int *nPtr)
{
	*nPtr = *nPtr* *nPtr* *nPtr;
}