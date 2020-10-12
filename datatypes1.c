#include <stdio.h>
#include <stdint.h>

/* Function Prototype in this file */
uint8_t abdul(int *a);  


int main()
{
    uint8_t a = 10; // creating a data type to variable a

    printf("a value is %d \n", a);  // printing the value in a 


    return 0;  // no return type 
}

uint8_t abdul(int *a)  // Assaign a values in function prototype 
{
    scanf("address of a is %d \n", &a); // scaning the address of a 
    printf("address of a is %d \n", a); // printing the address of a 
    

}