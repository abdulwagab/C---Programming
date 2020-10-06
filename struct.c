#include <stdio.h>

struct home
{
	char *abdul;
	char *ansari;
	char *amma;
};

int main()
{
	struct home student;
	student.abdul = "A";
	student.ansari = "B";
	student.amma = "c";
	printf(" student ansari grade is: %s\n", student.ansari);
	return 0;
}