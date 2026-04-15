#include <stdio.h>

int main(){
    int input_num;

    int bin_Nums[] = {128,64,32,16,8,4,2,1};
    int i;

    printf("please type a number check the binary of> \n");
    scanf("%d",&input_num);

    for (i=0;i< 8; i++) {
        
        if (input_num >= bin_Nums[i]){
            printf("%d",1);
            input_num -= bin_Nums[i];
        }
        else {
            printf("%d",0);
            
        }
        
    
    }

    printf("\n");

}
