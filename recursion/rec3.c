#include <stdio.h>

void nums(int n){
	if(n < 0) return;
	printf("%d\n", n);
	nums(--n);
}

int main(){
	int n = 0;
	scanf("%d", &n);
	nums(n);

	return 0;
}
