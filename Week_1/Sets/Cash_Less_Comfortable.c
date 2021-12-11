#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(){

float Change;

    do{

       Change = get_float("Change Owed: ");

    }while(Change <= 0);

    //Convert Dollars To Cents
    int Cents = (int) round(Change * 100)  ;
    int Coins = 0 ;

    //25 Cent

    while(Cents >= 25){

        Cents -= 25 ;
        Coins += 1 ;
    }

    //10 Cent

        while(Cents >= 10){

        Cents -= 10 ;
        Coins += 1 ;
    }

    //5 Cent

        while(Cents >= 5){

        Cents -= 5 ;
        Coins += 1 ;
    }

    //1 Cent

        while(Cents >= 1){

        Cents -= 1 ;
        Coins += 1 ;
    }

    printf("%i \n",Coins);

    return 0;
}