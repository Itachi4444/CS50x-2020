#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc , string argv[]){

if(argc != 2){

printf("Usage: ./Substitution Key\n");
return 0;

}
else{


if(strlen(argv[1]) != 26 ){
    printf("You Must Enter 26 Letter\n");
    return 1;
}

//Check If Empty
if(argv[1] == 0){
    printf("Usage: ./Substitution Key\n");
    return 1;
}


int LENGTH = strlen(argv[1]);

for(int i = 0 ; i < LENGTH ; i++){

//Check Repeated
for(int j = 0 ; j < i ; j++){

    if(argv[1][i] == argv[1][j] ){
        printf("The Key Should Not Have Repeated Chars\n");
        return 1;
    }

}

//Check Non Letters
if(!isalpha(argv[1] [i] ) ) {
printf("The Key Should Contains Letters Only\n");
return 1;
}


}

}

string PlainText = get_string("PlainText: ");

printf("CipherText: ");
int LENGTH = strlen(PlainText);

for(int i = 0 ; i < LENGTH;i++){

    if(islower(PlainText[i] ) )
    {
        printf("%c", tolower (argv[1][ PlainText[i] - 97 ] ));
    }
    else if (isupper ( PlainText[i]) ){

        printf("%c", toupper(argv[1][ PlainText[i] -65 ] ));
    }
    else{
        printf("%c",PlainText[i]);
    }

}

    printf("\n");
    return 0;

}