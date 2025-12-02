#include <stdio.h>
#include <string.h>

int main(){

        char* string_to_search = "daniel is sooo great";

        char* string_to_find = "great";
        char* return_string;
        return_string = strstr(string_to_search,string_to_find);

        printf("The word you were looking for is>\t %s\n",return_string);

        return 0;



        
}
