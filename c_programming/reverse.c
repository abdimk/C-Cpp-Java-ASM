#include <stdio.h>


// function which accepts char and returns the reversed version


void reversed(char *word, size_t siz)
{

	// print the word
	printf("[");
	for(int i = 0; i < siz; i++)
	{
		printf("%c",word[i]);
		printf(",");
	}

	printf("]\n");



	char reversed_car[siz - 1];
	int count = 0;
	
	for(int i = siz - 1; i >= 0; i--)
	{

		reversed_car[count] = word[i];
		count++;
	}
	

	// print the reversed string

	printf("[");
	for(int i = 0; i < siz; i++)
	{
		printf("%c", reversed_car[i]);
		printf(",");

	}
	printf("]\n");



}



int main()
{
	char first[] = {'a','b','d','i','s','a'};
	size_t s = sizeof(first) / sizeof(first[0]);



	reversed(first, s);
	return 0;


}
