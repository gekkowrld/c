# include <stdio.h>
# include <time.h>

/**
 * main - This is used to show how long in GMT is it left 
 * until time_t wrap up
 * Return: 0
*/

int main(void){
	time_t big = 0x7FFFFFFF;

	printf("biggest = %s\n", asctime(gmtime(&big)));

	return (0);
}