int string_length(const char *str){
        int length = 0;
        while(*str != '\0'){
        length++;
        str++;
        }
        return length;
}

void reverse_string(char *str){
        int start = 0;
        int end = string_length(str) - 1;
        while(start < end){

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
        }
}

int compare_strings(const char *str1, const char *str2){
    	while(*str1 && *str2){
	if(*str1 != *str2){
            return(*str1 > *str2) ? 1 : -1;
        }
        str1++;
        str2++;
    }

	if(*str1 == '\0' && *str2 == '\0'){
        	return 0;
	} else {
        	return(*str1 > *str2) ? 1 : -1;
	}
}

