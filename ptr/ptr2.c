#include <stdio.h>

int main(){
	int a = 6;
	int b = 10;
	int *ptr = &a;

	printf("%d\n", a);

	*ptr = 20;
	
	printf("%d\n", a);

	return 0;
}
