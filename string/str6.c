#include <stdio.h>
#include "main.c"

int compare_strings(const char *str1, const char *str2);

int main(){
	const char *a = "apple";
	const char *b = "apricot";
	const char *c = "apple";

	printf("%d\n", compare_strings(a, b)); // expected -1
	printf("%d\n", compare_strings(a, c)); // expected 0
	printf("%d\n", compare_strings(b, a)); // expected 1

	return 0;
}

