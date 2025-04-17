#include <stdio.h>

int atoi(const char *str){
	int i = 0;
	int result = 0;
	int sign = 1;

	if(str[i] == '-'){
        	sign = -1;
        	i++;
	} else if(str[i] == '+'){
        	i++;
	}

	while(str[i] >= '0' && str[i] <= '9'){
		result = result * 10 + (str[i] - '0');
        	i++;
	}

	return result * sign;
}

int main(){
	char str[100];
	fgets(str, sizeof(str), stdin);
	int res = atoi(str);
	printf("%d\n", res); 
	return 0;
}

