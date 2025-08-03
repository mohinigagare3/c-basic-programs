#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int n,i;
	//get the number of elements for the array
	printf("Enter number of elements :");
	scanf("%d",&n);
	
	//Dynamically allocate memory using malloc().
	ptr=(int*)malloc(n*sizeof(int));
	
	//check if the memory has been successfully.
	//allocated by malloc or not.
	if(ptr == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{
		//memory has been successfully allocated.
		printf("Memory successfully allocated using malloc.\n");
		
		//get the elememnts of the array.
		for(i=0;i<n;i++){
			ptr[i]=i+1;
		}
		
		// print the elememts of the array.
		for(i=0;i<n;i++){
			printf("%d",ptr[i]);
		}
	}
	return 0;
}