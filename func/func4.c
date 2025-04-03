#include <stdio.h>
#include "main.c"

int main(){
	double num1 = 0;
	double num2 = 0;
	scanf("%lf", &num1);
	scanf("%lf", &num2);
	double res = sum_d(num1, num2);
	printf("%lf\n", res);
	
	return 0;
}
