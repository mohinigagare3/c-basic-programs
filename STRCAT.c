// c string Concatenation :strcat()....
//the strcat(first_string,second_string)function concatenation two string...
//and result is returned to first_string....
#include<stdio.h>
#include<string.h>
int main(){
	char ch[10]={'h','e','l','l','o','\0'};
	char ch2[10]="lalit";
	strcat(ch,ch2);
	printf("Value of first string is :%s\n",ch);
	return 0;
	
}