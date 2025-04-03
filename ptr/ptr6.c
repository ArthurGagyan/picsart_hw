#include <stdio.h>

int main(){
        int num = 0;            //for example 4 byte
        short sh = 12;          //2 byte
        short* psh = (short*)&num;

        *(psh + 1) = 12;
        printf("%d \n" , *psh );        //0
        printf("%d \n", *(psh + 1));    //12
        printf("%d\n" , num);   //786432

        return 0;
}  
