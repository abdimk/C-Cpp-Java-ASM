// betting game => 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int total_cash = 100;
int play(int cash){
    char cards[3] = {'J','Q','k'};
    printf("Shuffling...\n");
    srand(time(NULL));
    for(int i=0; i < 5; i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = cards[x];
        cards[x] = cards[y];
        cards[y] = temp;
    }
    int playerGuess;
   // printf("%c,%c,%c\n",cards[0],cards[1],cards[2]);
    printf("what is the position of the queen - 1,2 or 3:");
    scanf("%d",&playerGuess);

    if(cards[playerGuess - 1] =='Q'){
        total_cash += 3*cash;
        printf("You won!, The order was %c, %c, %c, you balance is:%i\n",cards[0],cards[1],cards[2],total_cash);
    }else{
        total_cash -= cash;
        printf("You Lost!, The order was %c, %c, %c, you balance is:%i\n",cards[0],cards[1],cards[2],total_cash);
    }
}
int main(){
    int user_bet;
    while(total_cash > 0){
        printf("Total cash %i\n ",total_cash);
        printf("what is your bet amount in $:");
        scanf("%d",&user_bet);
        if(user_bet == 0 || user_bet > total_cash) break;
        play(user_bet);
        
    }
}