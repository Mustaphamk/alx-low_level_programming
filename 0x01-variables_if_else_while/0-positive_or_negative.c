#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Success
 */
int main(void) 
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
       	if (n > 0) 
		printf("%d is positive", n);
       	else if (n == 0) 
		printf("%d is zero", n);
    	else if (n < 0) 
		printf("%d is negetive", n);
	return (0);
}
