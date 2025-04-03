#include <stdio.h>
#include "main.c"

int main(){
	double celsius = 0;
	scanf("%lf", &celsius);
	double res = celToFahrenh(celsius);
	
	printf("%lf\n", res);

	return 0;
}
