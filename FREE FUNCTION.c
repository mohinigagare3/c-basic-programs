#include<stdio.h>
#include<stdlib.h>
int main(){
	
	//this pointer will hold the
	//base address of the block created.
	int *ptr,*ptr1;
	int n,i;
	
	//get the elements for the array.
	n=5;
	printf("Enter number of elements is :%d\n",n);
	
	//dynamically allocate memory using malloc().
	ptr = (int*)malloc(n*sizeof(int));
	
	//dynamically allocate memory using calloc().
	ptr1 = (int*)calloc(n,sizeof(int));
	
	//check if the memory has been successfully.
	//allocate by malloc or not.
	
	if(ptr == NULL || ptr1 == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{
		//memory has been successfully allocated.
		printf("Memory successfully allocated using malloc.\n");
		
		//free the memory
		free(ptr);
		printf("Malloc memory allocate using malloc.\n");
		
		//Memory has been successfully allocated.
		printf("Memory successfully allocated using calloc.\n");
		
		//free the memory 
		free(ptr1);
		printf("Calloc memory successfully allocated.\n");		
	}
		return 0;	
	}