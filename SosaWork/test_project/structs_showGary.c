#include <stdio.h>
#include <stdlib.h>

/*Creating Structs*/
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};


int main(){

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Ben");
    strcpy( student1.major, "Government");


    struct Student student2;
    student2.age = 23;
    student2.gpa = 3.6;
    strcpy( student2.name, "Max");
    strcpy( student2.major, "Communications");



    struct Student student3;
    student3.age = 18;
    student3.gpa = 4.0;
    strcpy( student3.name, "Coco");
    strcpy( student3.major, "Swimming");

    printf("%s\n", student1.name);
    printf("%s\n", student2.name);
    printf("%s\n", student3.name);
    printf("%d\n", student3.age);
    printf("%f", student3.gpa);

    return 0;
};

