#include<stdio.h>
#include<string.h>
//create a structure subject using the struct keyword.
struct subject{
	//declare the member of teh course structure..
	char sub_name[30];
	int sub_id;
		
	char sub_duration[50];
	char sub_type[50];
};
	int main(){
		struct subject sub;
		struct subject *ptr;
		ptr=&sub;
		
		strcpy(sub.sub_name,"computer science");
		sub.sub_id=1201;
		strcpy(sub.sub_duration,"6 Months");
		strcpy(sub.sub_type,"Multiple choice Question");
		//print the details of the subject...
		
		printf("subject name :%s\n",(*ptr).sub_name);
		printf("subject id is :%d\n",(*ptr).sub_id);
		printf("duration of the subject :%s\n",(*ptr).sub_duration);
		printf("type of the subjeect is :%s\n",(*ptr).sub_type);
		
		return 0;
	}