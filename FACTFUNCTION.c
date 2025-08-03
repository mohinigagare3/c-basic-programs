#include<stdio.h>
void fact(int n);
int main(){
	int n;
	int f;
	
	printf("enter number :");
	scanf("%d",&n);
	
	fact(n);
		
	return 0;
	
}

// function defination
void fact(int n){
	int fact=1;
	
	for(int i=1;i<=n;i++){
		 fact=fact*i;
	}
	printf("factorial is :%d\n",fact);
}