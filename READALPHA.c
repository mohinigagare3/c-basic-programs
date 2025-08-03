#include<stdio.h>
int main() {
	FILE *fptr;
	
	fptr=fopen("alphabet.txt","r");
	
	char ch;
	
	for(ch='a';ch<='z';ch++)
	{
		fscanf(fptr,"%c",&ch);
		printf("character is :%c\n",ch);
		
	}
		fclose(fptr);
}