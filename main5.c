#include <stdio.h>

int main(){
	float x = 0;
	float y = 0;
	scanf("%f%f",&x, &y);
	float res = x*y + 21*x / y - 200;
	printf("%f", res);

return 0;
}
