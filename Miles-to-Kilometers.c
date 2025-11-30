#include <stdio.h>


int main(){

        int start = 0;
        int end = 10;
        float calc;


        printf("Miles\tKilometers\n");
        while(start <= end){
        calc = (start * 0.621371);
                printf("%d\t%f\n",start,calc);
                start += 1;
        }

}
