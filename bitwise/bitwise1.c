#include <stdio.h>

int main(){
	int num = 0;
	scanf("%d", &num);
	if(num & 1 == 1){
		printf("The number is odd\n");
	}else{
		printf("The number is even\n");
	}



	return 0;
}
