#include <stdio.h>
#include <cs50.h>

int main(){

int startSize;
int endSize;

do {
        //Geting StartSize
s       tartSize = get_int("Enter Start Size: ");

}while(startSize < 9);

do{
    //Getting EndSize
    endSize = get_int("Enter End Size: ");

}while(endSize <= startSize);

int Years = 0;

//Calculate Numbers Of Years

while (startSize < endSize){

    startSize = (int) ( startSize + (startSize / 3) - (startSize / 4) );
    Years++;
}


//Print Years
printf("Years: %d\n", Years);

    return 0;
}