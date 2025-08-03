// C string Length : strlrn() function..
// the strlen() function returns the length of the given string.
// it doesn't count null character '\0'...
#include<stdio.h>
#include<string.h>
int main(){
	char ch[20]={'j','a','v','a','t','p','o','i','n','t','\0'};
	printf("Length of string is : %d\n",strlen(ch));
	return 0;
}