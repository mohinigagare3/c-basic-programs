// call by value example program.....
#include<stdio.h>
void swap(int a,int b);
int main(){
	int a,b;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	printf("before swaping value of a :%d\n",a);
	printf("before swaping value of b :%d\n",b);
	
	 swap(a,b);
	
}

void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("after swaping value of a :%d\n",a);
	printf("after swaping value of b :%d\n",b);
	
}