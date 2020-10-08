#include <stdio.h>

/* function prototype */
int sum();
int mul();

// main function
int main()
{
	int a;
	int b;
	a = sum();
	b = mul();
	
	printf("sum = %d \nmul = %d \n ",  a, b);

	return 0;  // The return 0 means success and returning a non-zero number means failure.
}

int sum()
{
	int c = 2, d = 4, sum;

	sum = c + d;
	

	return sum;  // return function prototype int sum();
	
}

int mul()
{
	int c = 2, d = 4, mul;

	
	mul = c * d;

	
	return mul;  // return function prototype int mul();
}