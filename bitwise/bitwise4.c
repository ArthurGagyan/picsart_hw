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
	if(sum & 1 == 1)
		printf("The number is odd\n");
	else{
		printf("The number is even\n");
	}

	return 0;
}
