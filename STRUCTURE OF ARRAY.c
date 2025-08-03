#include<stdio.h>
#include<string.h>
struct student {
	int rollno;
	char name[20];
};
	int main(){
		struct student st[5];
		printf("enter 5 records of 5 students\n");
		
		for(int i=1;i<=5;i++){
			printf("enter roll no.:");
			scanf("%d",&st[i].rollno);
			
			printf("enter name :");
			scanf("%s",&st[i].name);
			
		}
		 printf("student information list.......\n");
		for(int i=1;i<=5;i++){
			printf("roll no.:%d : student name :%s\n",st[i].rollno,st[i].name);
		}
	}