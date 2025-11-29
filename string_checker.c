#include <stdio.h>
#include <string.h>


int main(){




        char test_string[25];
        char value_string[] = "potato";


        printf("Please input the word potato\n");

        scanf("%s", test_string);

        int check = strcmp(test_string, value_string);


        if (check == 0 ){

                printf("look here boys we have a po-ta-to!\n");
        }
        else {printf("Looks like you didn't spell %s, you spelt %s better luck next time...\n buck-O ;)\n",value_string,test_string);}
}                 
