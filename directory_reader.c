#include <stdio.h>
#include <dirent.h>




int main(){
	
	DIR *subfolder;
	struct dirent* entry;
	int file_count = 0;





	subfolder = opendir(".");
	 



	if (subfolder == NULL){
	
		printf("folder doesn't exist\n");
	}
	while( (entry=readdir(subfolder)))
	{
		file_count ++;
		
		if (entry->d_type == 4){
			printf("%s\t\tDirectory\n",entry->d_name);
		}	

		else {
			printf("%s\tFile\n",entry->d_name);
		}
			
	}

	closedir(subfolder);

	return 0;





	//https://c-for-dummies.com/blog/?p=3246
}
	
           
