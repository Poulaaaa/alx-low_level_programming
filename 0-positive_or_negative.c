#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* if and if else */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		    printif("%i is positive. \n" ,n);
	}
	else if (n < 0) {
		    printif("%i is negative. \n" ,n);
	}
	else {
		    printif("%i is zero. \n" ,n);
	}
	
	return (0);
