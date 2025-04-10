#include <stdio.h>

int mul(int n){
    if(n == 0) return 0;

    int result = 1;
    while(n != 0) {
        result *= n % 10;
        n /= 10;
    }

    return result;
}

int main(){
	int n = 0;
	scanf("%d", &n);
	int res = mul(n);
	printf("%d\n", res);

	return 0;
}
