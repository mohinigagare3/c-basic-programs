#include<stdio.h>
int fact(int n);
int main(){
	int n,f;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	 f=fact(n);
	printf("factorial is :%d\n",f);
	
	return 0;
}
//function defination
int fact(int n){
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	
	int factNM1=fact(n-1);
	int factn=factNM1*n;
	return factn;
}