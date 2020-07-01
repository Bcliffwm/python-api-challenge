#include <stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Ben", 23);
    sayHi("MaryAnne", 57);
    sayHi("Max", 25);
    sayHi("Richard", 58);
    return 0;
}

void sayHi(char name[], int age){
    printf("Hello %s you are %d years old\n", name, age);
}
