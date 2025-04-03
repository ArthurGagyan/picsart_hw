#include <stdio.h>

int main(){
	char c = 'a';
	char *ptr = &c;

	printf("%p\n", ptr);

	ptr++;

	printf("%p\n", ptr);




	return 0;
}
