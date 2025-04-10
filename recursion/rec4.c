#include <stdio.h>

void nums_ris(int n){
	if(n == 0){
	return;
	}
	nums_ris(n - 1);
	printf("%d\n", n);
}

int main(){
	int n = 0;
	scanf("%d", &n);
	nums_ris(n);

	return 0;
}
