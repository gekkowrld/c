# include <stdio.h>
# include <string.h>

void bubble();

/* sort driver */

int main() /* sort a string from a keyboard */
{
	char s[1024];

	printf("Enter a string: ");
	scanf("%s", s);
	bubble(s, strlen(s));
	printf("The sorted string is: %s\n", s);

	return (0);
}

/**
 * The bubble sort
 * The comparisons are 3/4(n^2 - n) for average case
 * and 3/2(n^2 - n) for the worst case
*/
void bubble(item, count)
char *item;
int count;
{
	register int a, b;
	register char t;

	for (a = 1; a < count; ++a)
		for (b = count - 1; b >= a; --b){
			if (item[b - 1] > item[b]){
				/* swap elements*/
				t = item[b - 1];
				item[b - 1] = item[b];
				item[b] = t;
			}
		}
}
