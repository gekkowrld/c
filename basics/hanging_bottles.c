# include <stdio.h>

int main(void)
{
	int counter;

	printf("\nUsing a for loop\n\n");
	for (counter = 1; counter < 11; counter++)
		printf("%i green bottle, hanging on a wall\n", counter);

	int count = 1;

	printf("\nUsing a while loop\n\n");
	while (count < 11)
	{
		printf("%i green bottle, hanging on a wall\n", counter);
		count++;
	}
}
