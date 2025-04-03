#include <stdio.h>

int main(){
	int a = 5;
	int *ptr = &a;

	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	printf("%p\n", &a);


	return 0;
}
