#include <stdio.h>
#include <stdlib.h>

/*Return Statement Functions must be above calling function*/
/*Unless providing a prototyping function*/
double cubeNum(double num){
    double result = num * num * num;
    return result;
}


int main(){
    printf("Answer: %f", cubeNum(10.0));
    return 0;
}

/*OR*/
double cubeNum(double num);

int main(){
    printf("Answer: %f", cubeNum(10.0));
    return 0;
}
double cubeNum(double num){
    double result = num * num * num;
    return result;
}
