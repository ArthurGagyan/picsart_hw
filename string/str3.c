#include <stdio.h>
#include <string.h>

int isPolindrome(const char *str, int left, int right){
	if(left >= right) return 1;

	if(str[left] != str[right]) return 0;
	return isPolindrome(str, left + 1, right - 1);

}

int main(){
	char str[100];
	fgets(str, sizeof(str), stdin);


	printf("%d\n", isPolindrome(str, 0, strlen(str) - 2));


	return 0;
}
