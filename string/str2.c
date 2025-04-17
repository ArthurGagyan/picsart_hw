#include <stdio.h>
#include <string.h>

const char *_strcat(char *dest, const char *src){
	const char *ret = dest;
	int size1 = strlen(dest);
	int size2 = strlen(src);

	dest = dest + size1;
	for(int i = 0; i < size2; ++i){
		*dest = src[i];
		++dest;
	}
	*dest = '\0';
	return ret;
}


int main(){
	char str1[100];
	char str2[100];
	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);
	if(strlen(str1) + strlen(str2) < sizeof(str1)){
		printf("%s\n", _strcat(str1, str2));
	}else{
		printf("The arr is too long");
	}

	return 0;	
}
