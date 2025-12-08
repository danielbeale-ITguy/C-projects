#include <stdio.h>
int main(){

	char dot_line[] = "#";
	int hash, height, len;
	int base = 0, count = 0;
	 
	printf("Height: ");
	
	scanf("%d",&height);

	if (height <= base){	
		
		main();
	}
	else if (height > 8){
		
		main();
	}
	else {
	height = height -1;	
	while (height >= 0){
		len = height;
		
		while (len >=  base) {
				printf(" ");
				
				len --;	
			}
	
	//creating the hashes	
				
		for (hash = 0; hash <= count; hash ++)	{
				printf("%s",dot_line);
			}
			printf("\n");
			height --;
			count ++;			
	}

	}	
		
} 

