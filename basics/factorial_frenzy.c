# include <stdio.h>

/**
 * factorial - A function for printing out factorials factorials
 * @n: The number in which the factorial will be don on
 * Return: The factorial
*/

int factorial(int n)
{

	if (n == 1 || n == 0)
		return (1);

	return n * factorial(n - 1);
}

/**
 * main - Run the factorial function
 * Return: 0
*/

int main(void)
{

	int n;
	printf("Enter the number: ");
	scanf("%d", &n);

	printf("%d\n", factorial(n));

	return (0);
}
