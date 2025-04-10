#include <stdio.h>

char findFirstUpperCase(char str[], int index){
	if(str[index] == '\0'){
	return '\0';  
	}

	if(str[index] >= 'A' && str[index] <= 'Z') {
        	return str[index];
	}

	return findFirstUpperCase(str, index + 1);
}

int main(){
	char str[] = "hEllo woRld!";
    
	char result = findFirstUpperCase(str, 0);
    
	if(result != '\0'){
        printf("%c\n", result);
	} else{
        printf("No uppercase letter found\n");
	}

	return 0;
}

