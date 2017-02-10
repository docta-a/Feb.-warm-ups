#include <stdio.h>

int main() {
	char string[10];

	printf("What is your name?");
	fgets(string, 10, stdin);
	printf("%s you have a nice face!", string);

}