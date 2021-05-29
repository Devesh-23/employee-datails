#include<stdio.h>
struct employee
{
	char name[30];
	int age;
	int phoneno;
	float salary;
};

int main()
{
	struct employee emp;
	printf("\n Enter employee details:");
	printf("\n Name: ");
	gets(emp.name);
	printf("\n Age: ");
	scanf("%d", &emp.age);
	printf("\n Phone number: ");
	scanf("%d", &emp.phoneno);
	printf("\n Salary: ");
	scanf("%f", &emp.salary);
	
	printf("\n Employee details are: ");
	printf("\n Name: %s", emp.name);
	printf("\n Age: %d", emp.age);
	printf("\n Phone no: %d ", emp.phoneno);
	printf("\n Salary: %f ",emp.salary);
	return 0;
}
