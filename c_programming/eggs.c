#include <stdio.h>

int main()
{
	int eggs;
	double total_eggs;

	printf("Enter the number of egges:");
	scanf("%i", &eggs);

	total_eggs = (double) eggs / 12;


	printf("You have %f eggs in your basket\n",total_eggs);


	return 0;

	

}
