#include <stdio.h>
#include "main.c"

int main(){
	int num = 0;
	scanf("%d", &num);
	int res = isPositive(num);
	
        printf("%d\n", res);
        
        return 0;
}
