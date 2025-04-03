int sum(int a, int b){
    return a + b;
}

int square(int num){
    return num * num;
}

int isPositive(int num){
    if(num > 0) {
        return 1;
    }
    return 0;
}

double sum_d(double num1, double num2){
    return num1 + num2;
}

int max(int a, int b){
    if (a > b){
        return a;
    }
    return b;
}

double celToFahrenh(double celsius){
    return (celsius * 9.0 / 5.0) + 32;
}
