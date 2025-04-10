#include <stdio.h>

void print_b(int n){
	if(n == 0) return;               
	print_b(n / 2);              
	printf("%d", n % 2);              
}

int main(){
       int n;
       scanf("%d", &n);

       if(n == 0)
           printf("0");
        else
        print_b(n);

        printf("\n");
	return 0;
}

