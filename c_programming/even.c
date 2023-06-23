#include <stdio.h>


void rtype(int num)
{
	int even_count = 0;
	for(int i=0; i < num; i++)
	{
		if(i % 2 ==0)
		{
			even_count++;
		}
	}

	printf("The number of evens between 0 - %i is %i\n",num,even_count);
}
int main()
{
	int user;
	printf("Enter a number:");
	scanf("%i", &user);

	rtype(user);
	return 0;
}
