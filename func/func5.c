#include <stdio.h>
#include "main.c"

int main(){
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	
	int res = max(a, b);

	printf("%d\n", res);

	return 0;
}
