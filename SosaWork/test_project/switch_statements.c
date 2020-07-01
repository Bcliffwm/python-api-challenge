#include <stdio.h>
#include <stdlib.h>

int main(){

    char grade='B';

    switch(grade){
    case 'A':
        printf("You did great! ");
        break;
    case 'B':
        printf("You did good. ");
        break;
    case 'C':
        printf("You did average. ");
        break;
    case 'D':
        printf("You almost failed. ");
        break;
    case 'F':
        printf("You failed. ");
        break;
    default :
        printf("Invalid Grade");
    };

    return 0;
}

