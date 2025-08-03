#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int roll;
	float cgpa;
};
typedef struct ComputerEngineeringStudent{
	int roll;
	float cgpa;
	char name[30];
}coe;

void printInfo(struct student s1);

int main(){
	
	struct student s1;
	// s1.name = "lalit" ; not a modifiable value...
	strcpy(s1.name,"lalit");
	s1.roll=314672;
	s1.cgpa=9.15;
	
	printf("student info :\n");
	printf("student name :=%s\n",s1.name);
	printf("student roll no. :=%d\n",s1.roll);
	printf("student cgpa is :=%f\n",s1.cgpa);
	
	// array of structures
	struct student IT[60];
	struct student COE[60];
	struct student ECE[60];
	
	//declearation of array...
	struct student s2={"yogesh",302145,9.5};
	struct student s3={0};
	
	printf("roll no. of s2 = %d\n",s2.roll);
	printf("roll no. of s3 = %d\n",s3.roll);
	
	// pointer of structure.......
	struct student *ptr=&s1;
	printf("student.name := %s\n",(*ptr).name);
	printf("student.roll := %d\n",(*ptr).roll);
	printf("student.cgpa := %f\n",(*ptr).cgpa);
	
	// arrow operator.....
	printf("student->name := %s\n",ptr->name);
	printf("student->roll := %d\n",ptr->roll);
	printf("student->cgpa := %f\n",ptr->cgpa);
	
	// passing structure to function...
	printInfo(s1);
	
	// typedef keyword....
	
	coe student1;
	student1.roll=302145;
	student1.cgpa=9.05;
	strcpy(student1.name,"YOGESH");
	
	return 0;
}

void printInfo(struct student s1){
printf("student info :\n");
printf("name := %s\n",s1.name);
printf("roll no := %d\n",s1.roll);
printf("cgpa is := %f\n",s1.cgpa);
}