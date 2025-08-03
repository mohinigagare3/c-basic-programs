// c compare string:strcmp()
// the strcmp(first_string,second_string)function compares two string 
// and returns 0 if both strings are equal.
// here,we are use gets() function which reads string from the console.
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	printf("Enter 1st string :");
	gets(str1);
	printf("enter 2nd string :");
	gets(str2);
	
	if(strcmp(str1,str2)==0){
		printf("string is equal\n");
	}
	else{
		printf("string is not equal\n");
	}
	
	return 0;
	
}