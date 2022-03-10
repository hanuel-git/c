#include<Stdio.h>

struct employee
{
	char name [10];
	char num[13];
	int info;
};

int main(Void)
{
	struct employee a;
	printf("Please enter employee's name :");
	scanf("%s", a.name);
	printf("Please enter employee's num :");
	scanf("%s", a.num);
	printf("Please enter employee's info :");
	scanf("%d", &a.info);

	printf("Name is : ", a.name);
	printf("Num is : ", a.num);
	printf("Info is : ", a.info);

	return 0;

}