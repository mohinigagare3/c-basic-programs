//the strrev(string)function returns reverse of the given string..
//let's see a simple example of strrev() function...
#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	printf("enter string :");
	gets(str);
	printf("String is :%s\n",str);
	printf("after reversing string is :%s\n",strrev(str));
	return 0;
}