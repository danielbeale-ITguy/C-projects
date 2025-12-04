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
        

// below code is test from another file that can be used to implement the backwards function.

#include <stdio.h>
#include <string.h>

int main(){
        char word[10] = "Daniel";
        int lenght = strlen(word);
        int base = 0;
        int end = lenght ;

        //printf("%s\n",word);
        //printf("%c\n",word[0]);

        while (end >= base){
        //assign to variable then printf possibly       
                printf("%c",word[end]);
                end --;
        
        }

        printf("\n");//prints the actual line 
        return 0;
}
