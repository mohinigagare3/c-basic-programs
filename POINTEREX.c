#include<stdio.h>
int main(){
	int a=5;
	int *ptr;
	ptr=&a;
	
	printf("address of a is :%u\n",&a);
	printf("address of pointer ptr is :%u\n",ptr);
	printf("%d\n",*ptr);
}