#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[20];
	float percentage;
	char village[20];
};
int main(){
	
		struct student s[3];
	
		// save the 3 student information.....
		
		for(int i=1;i<4;i++){
		
		printf("%d enter the student roll no. :",i);
		scanf("%d",&s[i].roll);
		
		printf("%d enter the student name :",i);
		scanf("%s",&s[i].name);
		
		printf("%d enter the student percentage :",i);
		scanf("%f",&s[i].percentage);
		
		printf("%d enter the student village name :",i);
		scanf("%s",s[i].village);
	}
		
		// print the 3 students information.....
	
		for(int i=1;i<4;i++){
		
		printf("%d student roll no. is :%d\n",i,s[i].roll);
		printf("%d student name is :%s\n",i,s[i].name);
		printf("%d student percentage is :%f\n",i,s[i].percentage);
		printf("%d student village name is :%s\n",i,s[i].village);
		printf("\n");
	}
		
		
}