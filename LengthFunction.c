#include<stdio.h>
int findlength(char str[]);

int main(){
	
	char str[100];
	int length;
	
	printf("enter the string :");
	gets(str);
	
	length=findlength(str);
	
	printf("length of string is :%d\n",length);
	
	
}

// function definiation........

int findlength(char str[]){
	int len=0;
	for(str[len];str[len]!='\0';len++){
		return len;
	}
}