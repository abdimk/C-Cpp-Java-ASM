#include <stdio.h>



int main()
{
	char c;
	int num;
	
	// from_char_to_integer
	printf("Please eneter a character:");
	scanf("%c", &c);

	printf("The ASCII value for %c is %i\n",c,c);

	// from_integer_to_character
	printf("please enter a number between 0-127:");
	scanf("%i", &num);

	printf("The ASCII value for %i is %c\n",num,num);
	return 0;
	
}
