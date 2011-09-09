#include <stdio.h>

/**
 * A simple function that will allow the user
 * to print their name.
 */
void print_name(char *name)
{
	printf("Your name is: %s\n", name);
}

int main(int argc, char *argv[]) 
{
	printf("Hello, World!\n");
	printf("Git is fun!\n");

	print_name("edwin");
	return 0;
}

