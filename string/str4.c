#include <stdio.h>
#include "main.c"

int main(){
	const char *str = "Hello world!";
	int len = string_length(str);

	printf("%d\n", len);


	return 0;
}

