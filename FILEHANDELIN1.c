#include<stdio.h>
int main() {
	FILE *fptr;
	fptr=fopen("even.txt","w");
	
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(i%2==0){
			fprintf(fptr,"i = %d\n",i);
		}
	}
	
	fclose(fptr);
	return 0;
}