#include<stdio.h>
int main()
{
	// read marks from user 
printf("enter the marks");
int marks;
scanf("%d",&marks);
// check marks 
if(marks>=85 && marks<100)
{
	//what if condition is true
	printf("You got A grade");
}
else if(marks>=70 && marks<84)
{
	//what if condition is true
	printf("you got B grade");
}
else if(marks>=55 && marks<69)
{
	//what if condition is true
	printf("you got c grade");
}
else if(marks>=40 && marks<54)
{
	//what if condition is true
	printf("you got d grade");
}
else if(marks<40)
{
	//what if condition is true
	printf("you got f grade");
	return 0;
}
}
