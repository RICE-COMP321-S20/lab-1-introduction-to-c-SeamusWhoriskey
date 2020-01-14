#include <stdio.h>

/* Put your function here. */

int
main(void)
{
	int n = 5;

	printf("Factorial of %d is %d.\n",
	    n, fact_rec(n));
	return (0);
}
