#include <stdio.h>

int main(){

	char dot_line[] = "X";
	int hash; 
	int height = 8;
	int len;
	int base = 0;
	int count = 0;

	//use double for loop to fill space with x, later making it _
	while (height >= 0){
		len = height;
		
		while (len >=  base) {
				printf("x");
				
				len --;	
			}
	
	//creating the hashes	
		count ++;		
		for (hash = 0; hash <= count; hash ++)	{
				printf("#");
			}

			
			
			printf("\n");
			height --;
			
	}

}
