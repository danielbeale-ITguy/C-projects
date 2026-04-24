#include <stdio.h>



int main(){


    int num;


    printf("Please input a number\n");
    scanf("%d",&num);

    for (int i=1;i < 13; i++){
        int result = i * num;
        printf("%d *  %d = %d\n",i,num,result);


    }





}
