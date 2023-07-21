#include <stdio.h>

int main(){

//Taking user input
    
    char name[100]; //declaration of taking input in characters, where the limit of characters is 100

    printf("What is your name?: ");
    scanf("%99s", name);

    printf("hello, %s!\n", name);
    return 0;



}