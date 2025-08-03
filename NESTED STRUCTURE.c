#include<stdio.h>
struct address{
	char city[20];
	int pin;
	char phone[14];
	};
	struct employee{
		char name[20];
		struct address add;
	};
	int main(){
		struct employee emp;
		printf("enter the employee information......\n");
		scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
		
		printf("printing the employee information......\n");
		printf("name:%s\n\tcity:%s\n\tpincode:%d\n\tphone:%s\n\t",emp.name,emp.add,emp.add,emp.add.pin,emp.add.phone);
	}