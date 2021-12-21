#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

string Encipher(string word , int key);

int main(int argc , string argv[]){


int LENGTH = strlen(argv[1]) ;

    if(argc == 2){

        for(int i = 0 ; i < LENGTH ; i++){

            if( !isdigit( argv[1][i] ) ){

                printf("Usage: ./Caesar key\n");
                return 1;
            }

            else{

                    int Key = atoi(argv[1]);

                    string PlainText = get_string("PlainText: ");

                printf("CipherText: ");

                    Encipher(PlainText , Key);

            }

        }

    }

    else{
        printf("Usage: ./Caesar key\n");
    }


    return 0;
}

string Encipher(string Word , int key){

int LENGTH = strlen(Word);

for(int i = 0 ; i < LENGTH ; i++){

    if( isalpha(Word[i]) ){

        if(isupper(Word[i])){

        printf("%c" , ( (Word[i] - 65)  + key  % 26 ) + 65);

        }
        else{

            printf("%c", ( (Word[i] - 97) + key % 26 ) +   97 );

        }

    }
    else{

    printf("%c" , Word[i] );
    }

    }

    printf("\n");

    printf("CipherText In Func: %s\n" , CipherText);

    return 0;
}