# include <stdio.h>
# include <string.h>


/* The shaker sort - an improved bubble sort. */

void shaker(char *item, int count)
{
	register int a, b, c, d;
	char t;

	c = 1;
	b = count - 1; d = count - 1;

	do {
		for (a = d; a >= c; --a){
			if (item[a - 1] > item[a]){
				t = item[a - 1];
				item[a - 1] = item[a];
				item[a] = t;
				b = a;
			}
		}
		c = b + 1;
		for (a =  c; a < d + 1; ++a){
			if(item[ a - 1 ] > item[a]){
				t = item[a - 1];
				item[a - 1] = item[a];
				item[a] = t;
				b = a;
			}
		}
		d = b - 1;
	}while (c <= d);
}

int main(void){
	char c[1024];

	puts("Enter the characters to be sorted");
	scanf("%s", c);
	shaker(c,  strlen(c));

	printf("The sorted characters are:\n %s \n", c);
}
