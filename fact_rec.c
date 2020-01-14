#include <stdio.h>

int
fact_rec(int x)
{
  if (x == 1)
    return (1);
  else
    return (x * fact_rec(x-1));
    
}

int
main(void)
{
	int n = 5;

	printf("Factorial of %d is %d.\n",
	    n, fact_rec(n));
	return (0);
}
