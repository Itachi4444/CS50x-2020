#include <stdio.h>
#include <cs50.h>

int main(){

int Height;

    do{
        //Getting Height
        Height = get_int("Enter Height: ");

    }while(Height <= 0 || Height > 8);

    //Lines Loop
    for(int i = 0 ; i < Height ; i++){


    //Spaces Loop
    for(int k = Height; k > i ; k--){

    printf(" ");

    }

    //Hashes Loop
    for(int j = 0 ; j < i ; j++){

    printf("#");


    }

    printf("\n");

    }


    return 0;
}