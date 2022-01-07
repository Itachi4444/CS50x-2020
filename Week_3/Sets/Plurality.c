#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct{

    string name ;
    int votes;
}

candidate;


const int MAX = 9;

int count;

candidate candidates[MAX];

void print_winner(void);

bool vote(string name);

int main(int argc , string argv[]){

    // Check for invalid usage
if (argc < 2)
{
    printf("Usage: plurality [candidate ...]\n");
    return 1;
}


if(argc-1 > 9){
    printf("Max Size Of Candidate Is 9\n");
    return 1;
}

count = argc-1;

int voters_num = get_int("Number Of Voters: ") ;


for(int i = 0; i < argc-1; i++){

candidates[i].name = argv[i+1];

}


for(int i = 0 ; i < voters_num ; i++){

string current_voter = get_string("Vote: ");
    vote(current_voter);

}

print_winner();

    return 0;
}

//Vote Function
bool vote(string name){

for(int i = 0; i < count ; i++){

    if(strcmp(candidates[i].name , name)  == 0){
        candidates[i].votes += 1;
        return true;
    }

}


return false;

}
//print winner Function
void print_winner(void){


 int highestVotes = 0;
    // find highest number of votes
    for (int i = 0; i < count; i++)
        if (candidates[i].votes > highestVotes)
            highestVotes = candidates[i].votes;

    // print winner(s)
    for (int i = 0; i < count; i++)
        if (candidates[i].votes == highestVotes)
            printf("Winner: %s\n", candidates[i].name);

}