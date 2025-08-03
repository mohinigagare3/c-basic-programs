#include<stdio.h>
int main(){

	FILE *fptr;
	fptr=fopen("num.txt","w");
	
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	
	while(n<=10){
		if(n%2==0)
		{
			fprintf(fptr,"%d\n",n);
		}
	}
	
	return 0;
}