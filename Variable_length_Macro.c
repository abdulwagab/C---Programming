#include <stdio.h> 


/* define Macros Message ID and Identifier */
#define INFO 1   
#define ERR 2  
#define STD_OUT stdout 
#define STD_ERR stderr 

#define LOGGING_MESSAGE(priority, buffer, message, ...) do {\ 
						char *str;\ 
						if (priority == INFO)\ 
							str = "INFO";\ 									
						else if (priority == ERR)\ 
							str = "ERR";\ 
						fprintf(buffer, "[%s] : %s : %d : "message" \n", \ 
								str, __FILE__, __LINE__, ##__VA_ARGS__);\    
					} while (0) 

int main(void) 
{ 
	/*Assaign values to string */
	char *s = "Abdul";   

		/* display normal message Macros Message ID and Identifiers*/
	LOGGING_MESSAGE(ERR, STD_ERR, "Cannot Open your C File");   

	/* provide string as argument Calling  Macros Message ID and Identifiers*/
	LOGGING_MESSAGE(INFO, STD_OUT, "%s Software Developer", s);   

	/* provide integer as arguments */
	LOGGING_MESSAGE(INFO, STD_OUT, "%d * %d = %d", 4, 2, (4 * 2));   

	return 0; 
} 
