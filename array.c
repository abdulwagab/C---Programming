/* Header File */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Function Prototype */
char output(void);


/* Main Function */
int main(void)
{
    output();

    uint8_t arr[6];
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    arr[5] = 5;
    printf("The array Number is: %d, %d, %d, %d, %d \n", arr[1], arr[2], arr[3], arr[4], arr[5] );


    return 0;
}


char output(void)
{
    static volatile char *arr[6];  // static is constantly maintain its value and volatile keyword shared the memory with its two threads in RAM

    arr[1] = "S";

    arr[2] = "O";

    arr[3] = "F";

    arr[4] = "T";

    
    
    printf("The  array value is: %s, %s, %s, %S \n", arr[1], arr[2], arr[3], arr[4]);



}