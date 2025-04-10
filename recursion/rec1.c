#include <stdio.h>

int fib(int n){
        if(n >= 0 && n < 2){
                return n;
        }
        return fib(n - 1) + fib(n - 2);

}

int main(){
        int n = 0;
        scanf("%d", &n);
        int res = fib(n);
        printf("%d\n", res);

        return 0;
}

