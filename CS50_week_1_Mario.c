#include <stdio.h>
#include <string.h>



int main(){

        int num = 3;
        char sign[30] = "#";
        char new_sign[30];


        while (num > 0){
                
                strcat(new_sign,sign);
                printf("%s\n",new_sign);
                num -= 1;
        }
        



