#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[20];
	float percentage;
	char village[20];
};
int main(){
	
	struct student s1;
	
	printf("enter the student roll no. :");
	scanf("%d",&s1.roll);
	
	printf("enter the student name :");
	scanf("%s",&s1.name);
	
	printf("enter the student percentage :");
	scanf("%f",&s1.percentage);
	
	printf("enter the student village :");
	scanf("%s",&s1.village);
	
	printf("student roll no. is :%d\n",s1.roll);
	printf("student name is :%s\n",s1.name);
	printf("student percentage is :%f\n",s1.percentage);
	printf("student village name is :%s\n",s1.village);	
}