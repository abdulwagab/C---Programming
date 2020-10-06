/* Using Relational Operator */

#include <stdio.h>  // Header file

int main(void)   // int main is return type function  can be called without any argument
{
	int k = 1, m = -4, n = 2, o = 0;  // Assign values to the variable

	int x, y, z;  // Assign values to the variable

	x = ++k || --m && ++n;  //Using Relational Operators

	y = --k || ++m && --n;

	z = ++k && --m || ++n;

	printf("%d, %d, %d, %d \n", x, y, z, o );  // Print that function

	return 0;  // The return 0 means success and returning a non-zero number means failure.
}
