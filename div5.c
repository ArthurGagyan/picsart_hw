#include <stdio.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	int count = 0;
	scanf("%d", &num1);
	scanf("%d", &num2);
	for(int i = num1; i <= num2; i++ ){
		if(i % 5 ==0){
			count++;
		}
	}

	printf("%d\n", count);




	return 0;
}
