#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int n,i;
	
	//get the number of elements for the array.
	n=5;
	printf("Enter number of elements is :%d\n",n);
	
	//dynamically allocate memory using calloc().
	ptr=(int*)calloc(n,sizeof(int));
	
	//check if the memory has been successfully.
	//allocate by calloc or not.
	if(ptr == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{
		//memory has been successfully allocated.
		printf("Memory successfully allocated using calloc.\n");
		
		//get the elements of the array
		for(i=0;i<n;i++){
			ptr[i]=i+1;
		}
		
		//print the elements of the array 
		printf("The elements of the array are :");
		for(i=0;i<n;i++){
			printf("%d",ptr[i]);
		}
	}
		return 0;
}