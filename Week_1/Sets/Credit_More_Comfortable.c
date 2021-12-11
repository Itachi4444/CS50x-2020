#include <stdio.h>
#include <cs50.h>

int main(){

    long CardNum = get_long("Enter Card Number: ");

    long CardNum_1 = CardNum;

    int Count = 0;

    long CardNum_2 = CardNum;

    double CardNum_3 = CardNum;

    int CardNum_4 = 0;
    //Geting CardDigitsCount
    while(CardNum_1 > 0 ){

    CardNum_1 /= 10;

    Count++;

    }

    for(int i = 0; i <  Count ;i++){

        CardNum_2 /= 10 ;

        if(i % 2 == 0){

        CardNum_3 = CardNum_2 % 10 ;

        CardNum_3 *= 2;

        if(  CardNum_3  / 10 < 1 ){

                 CardNum_4 += CardNum_3 ;
        }

        else{

            CardNum_4 +=  (int) CardNum_3  % 10  ;

            CardNum_3 = (double) ( (int) CardNum_3  / 10  );

            CardNum_4 += ( (int) CardNum_3 % 10);
        }


        }

    }

    if(Count == 15  && (  (CardNum % 100) == 37 || (CardNum % 100) == 34 ) ){
        printf("American Express\n");
    }

    else if ( Count == 16 && ( (CardNum % 100) == 51 || (CardNum % 100) == 52 || (CardNum % 100) == 53|| (CardNum % 100) == 54 || (CardNum % 100) == 55  ) ){
        printf("Master Card\n");
    }

    else if( (Count == 13 || Count == 16 ) && CardNum % 10 == 4 ){
        printf("VISA\n");
    }

    else {
        printf("INVALID\n");
    }

    return 0;
}