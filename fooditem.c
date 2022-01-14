#include<stdio.h>
int main()
{
	printf("pick a food item:\n1. pizza ,Rs 239\n2. burger ,Rs 129\n3.pasta ,Rs 179\n4. french fries ,Rs 99\n5. sandwich,Rs 149 ");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you ordered pizza for Rs 239.");
			break;
		case 2:
			printf("you ordered burger for Rs 129");
			break;
		case 3:
	      	printf("you ordered pasta for Rs 179");
		    break;
		case 4:
		printf("you ordered french fries for Rs 99");
		break;
		case 5:	
		printf("you ordered sandwich for Rs 149");
	
	}
}
