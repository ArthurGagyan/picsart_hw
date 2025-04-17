#include <stdio.h>
#include "main.c"

int main(){
	char myString[] = "hello";

	printf("%s\n", myString);
	reverse_string(myString);
	printf("%s\n", myString);

	return 0;
}
