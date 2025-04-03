#include <stdio.h>

int main(){
	int num, sum = 0;
	scanf("%d", &num);

	while(num > 0){	
		if(num & 1 == 1){
			sum++;
		}
		num = num >> 1;
	}
		printf("%d\n", sum);


	return 0;
}
