#include<stdio.h>
int main(){
	int a=5;
	int *ptr=&a;

	// print address..
	
	printf("address of a is :%u\n",ptr);
	
	int *_ptr=ptr+1;
	printf("after incrementing address of a is :%u\n",_ptr);
	
	int x=3;
	int y=10;
	
	int *p=&x;
	int *q=&y;
	
	printf("address of x is :%u\n",p);
	printf("address of y is :%u\n",q);
	
	printf("diffrence is (p-q) :%d\n",p-q);
	
	
	return 0;
}