#include<stdio.h>
int main(){
	int ar[5];
	int *ptr;
	ptr=&ar;
	printf("address of ar[0] is :%u\n",ar[0]);
	printf("address of ptr is :%u\n",ptr);
}