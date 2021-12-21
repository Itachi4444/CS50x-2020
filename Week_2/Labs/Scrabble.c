#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

//Points
int Points[] = {1 , 3 , 3 , 2 , 1 , 4 , 2 , 4 , 1 , 8 , 5 , 1 , 3 , 1 , 1 , 3 , 10 , 1 , 1 , 1 , 1 , 4 , 4  , 8 , 4 , 10};

int Compute_Score(string Word);

int main(void){

    //Get Input
    string Player_1 = get_string("Player_1: ");

    string Player_2 = get_string("Player_2: ");


    int Score_1 = Compute_Score(Player_1);
    int Score_2 = Compute_Score(Player_2);

    if(Score_1 > Score_2){
        printf("Player_1 Wins!\n");
    }
    else if (Score_1 < Score_2){
        printf("Player_2 Wins!\n");
    }
    else{
        printf("Player_1 Equal Player_2 \n");
    }

    return 0;

}

int Compute_Score(string Word){

int points = 0;
int LENGTH = strlen(Word) ;

for(int i = 0 ; i < LENGTH ; i++){

    if(isalpha(Word[i]) ){

    points += Points[ tolower(Word[i]) - 97 ];

    }

}

//printf("Points: %d \n", points);

return points;
}