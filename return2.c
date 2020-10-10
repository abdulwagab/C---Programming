#include <stdio.h>
 int div(int, int);

 int main()
 {
     int a = 4, b = 2, c;
     c =  div(a, b);
     printf("%d \n", c);
     scanf("%d", &c);
     return 0;
 }

 int div(int a, int b)
 {
     
     return (a + b);

 }