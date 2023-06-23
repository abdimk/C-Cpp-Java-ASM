// guess game 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//pseudo random number generator
	// this gets the value form the seed
	srand(time(NULL));
	int user_guess;
	int max_value = 11;
	int current_life = 0;
	int game_score = 0;

	while(current_life < 3){
		int randomNumber = rand() % max_value;
		
		printf("\nEnter a number between 0 - 10:");
		scanf("%d",&user_guess);
		
		if(user_guess == randomNumber){
			printf("Lucky bastrad! The number was %i\n", randomNumber);
			game_score++;
			current_life--;
			

		}
		else{
			printf("N**ga Try again! btw the number was %i\n", randomNumber);
		}
		current_life++;
	}
	(current_life == 3)? printf("You lost %i lifes and you scored %i!\n",current_life,game_score) : NULL ; 

	return 0;
}
