#include <stdio.h>

int main(){

        char dot_line[] = "X";
        int height = 8;
        int len;
        int base = 0;

        //use double for loop to fill space with x, later making it _
        while (height >= 0){
                len = height;

                while (len >=  base) {
                                printf("x");
                                len --;
                        }

                        printf("\n");
                        height --;
        }


}
