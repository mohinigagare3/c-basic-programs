#include<stdio.h>
int square (int n);
int main() {
	int n;
	int ans;
	
	printf("enter the number :");
	scanf("%d",&n);
	
	ans=square(n);
	
	printf("square of given no. is :%d\n",ans);
	
}
// function defination 
int square(int n){
	 return n*n;
}