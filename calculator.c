#include <stdio.h>

int main()
{

        int input_1;
        char operator;
        int input_2;
        int answer= 0;

        printf("first number> ");
        scanf("%d", &input_1);

        printf("input operator + - = /");
        scanf(" %c", &operator);
        
        printf("second number> ");
        scanf("%d", &input_2);

        if (operator == '+'){
                
                answer = (input_1 + input_2);
                printf("%d\n",answer);
        }       

}
