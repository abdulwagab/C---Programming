#include <stdio.h>

int add(int a, int b)  // function addition
{
	return a + b;  
}

int mul(int a, int b)  // function multiply
{
	return a * b;
}

typedef int function(int a, int b);    // Assign new Data type

int call_function(function *p, int a, int b)  // p is a pointer that stores the address of variable a, b
{
	return p(a, b);   // The data type of pointer p and variable var should match because an integer pointer can only hold the address of integer variable.
}

int main(void)  // In c main is a calling function
{
	int sum;
	sum = call_function(&add, 1, 1);
	printf("add function is: %d\n", sum);

	sum = call_function(&mul, 1, 1);
	printf("mul function is: %d\n", sum);

	return 0;

}