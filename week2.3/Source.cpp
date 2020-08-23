#include<stdio.h>
int main()
{
	int x;
	printf("Yes press 1\t No press 0");
	printf("\nDo you like Com fun : ");
	scanf_s("%d", &x); 

		if (x == 1)
		{
			printf("Grade A");
		}
		else if (x == 0) 
		{
			printf("Grade F");
		}
		else 
		{
			printf("Please press 1 or 0");
		}
	return 0;
}