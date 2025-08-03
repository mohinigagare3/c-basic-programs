#include<stdio.h>
int fibo(int n);
int main()
{
	int n;
	int f;
	printf("enter the last no.of series :");
	scanf("%d",&n);
	
	f=fibo(n);
	printf("last no. is :%d\n",f);
}
// function defination 
int fibo(int n)
{
	
	if(n==0)
	{
		return 0;
	}
	
	else if (n==1)
	{
		return 1;
	}
	
	return fibo(n-1) + fibo(n-2);
}