/**
 * As a tradition we'll start with Hello, World
*/
# include <stdio.h> // This line tells the operating system to make look for this file and make it ready for use in our program

int main() // main() is used as the entry point to every C program. This function is special because the OS calls it unlike other functions that we'll have to call them ourselves
{
	/**
	 * The printf is one of the "prototypes" that is defined in our file stdio.h
	 * It is used to print characters to the stdout (whenever the program will display it's output)
	 * We have double quotes which means that it is more than one character that is being passed to printf
	 * Then we have our Hello, World that we want to print out.
	 * We have included "\n" which is a special character that tells the program to print out a newline instead of the two characters as separate entities
	 * Almost all C statements are closed with a semi colon.
	*/
	printf("Hello, World\n");
}