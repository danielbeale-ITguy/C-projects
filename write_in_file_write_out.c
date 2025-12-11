#include <stdio.h>
#include <unistd.h>

int main(){

        FILE *fptr;
        char input[50];
        char y_n;
        char y = 'y';

        void write_file(){
                printf("please write some output text for dan.txt\n");
                fptr = fopen("dan.txt","w");
                fgets(input,50,stdin);
                fprintf(fptr,"%s\n", input);
                fclose(fptr);   
        }

                                                        

        if (access("dan.txt",F_OK) == 0) {
                printf("File Already Exists, Would you Like to Overwrite Y/N\n");
                scanf("%c",&y_n);
                getchar();
                if (y_n == y){
                        write_file();
                }
                                        
        }
        else{   
                write_file();
        }
        
}
