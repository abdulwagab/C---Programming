// File Handling datatype2.c
// Please refer datatypes1.c and datatype2.c

#include <stdio.h>
#include <stdint.h>

#define Drv_LIN extern //using extern Keyword 

Drv_LIN uint8_t Init_LIN(void);  //Creating a function with the help of extern keyword

/* Function Prototype in this file */
uint8_t abdul(void);  


int main()
{
    uint8_t a = 10; // creating a data type to variable a

    printf("a value is %d \n", a);  // printing the value in a 

    Init_LIN();

    abdul();


    return 0;  // no return type 
}

uint8_t abdul()  // Assaign a values in function prototype 
{
    char *a;
    a = "abdul";

    printf("Value of a is %d \n", a);


    

}
