#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{
	if (n <= 1) return(1);
	else return (n*factorial(n-1));
}
int main (void)
{
	int n, result;
	
	printf("inter a integer : ");
	scanf("%d", &n);
	
	result = factorial(n);
	printf("%d", result);
	
	return 0;
}

