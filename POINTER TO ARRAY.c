#include<stdio.h>
int main(){
	int arr[3];
	
	int *ptr=&arr[0];
	int *ptr1=&arr[1];
	int *ptr2=&arr[2];
	
	printf("address of arr[0] is :%u\n",ptr);
	printf("address of arr[1] is :%u\n",ptr1);
	printf("address of arr[2] is :%u\n",ptr2);
	
	return 0;
	
	}