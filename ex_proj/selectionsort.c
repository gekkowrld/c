# include <stdio.h>
# include <string.h>

void select();

int main(){
	char s[1024];

	puts("Enter the characters to be sorted");
	scanf("%s", s);
	select(s, strlen(s));
	printf("The sorted characters are: \n %s\n", s);
}


/* The selection sort. */
void select(item, count)
char *item;
int count;
{
	register int a, b, c;
	char t;

	for (a = 0; a < count - 1; ++a){
		c = a;
		t = item[a];
		for (b = a + 1; b < count; ++b){
			if (item[b] < t){
				c = b;
				t = item[b];
			}
		}
		item[c] = item[a];
		item[a] = t;
	}
}
