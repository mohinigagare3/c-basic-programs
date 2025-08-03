#include<stdio.h>
void check(int n);
int main(){
	int n;
	printf("enter number :");
	scanf("%d",&n);
	
	check(n);
}
// function defination 
void check(int n){
	if(n>18){
		printf("YOU ARE ELIGIBLE FOR VOTING\n");
	}
	else{
		printf("SORRY!YOU ARE NOT ELIGIBLE FOR VOTING\n");
	}
}