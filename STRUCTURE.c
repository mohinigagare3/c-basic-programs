#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[10];
	float salary;
};
	int main(){
		struct employee abc;
		abc.id=1000;
		strcpy(abc.name,"lalit");
		abc.salary=5000;
		
		printf("employye id :%d\n",abc.id);
		printf("employye name :%s\n",abc.name);
		printf("employye salary :%f\n",abc.salary);
	}