#include <iostream>


using namespace std;

struct Rectangle
{
    double length;
    double width;
};


double area( double length, double width) //rectangle
{
    return length*width;
}


double area(double length) //square
{
    return length*length;
}
//Default Arguments see int power=2- cuts redundancy, improves ease of reading code
double pow(double base, int power=2)
{
    int total =1;
    for(int i=0; i<power; i++)
        {
            total*=base;
        }
    return total;
}


double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

int main()
{
    cout << pow(3,3)<<endl;
    cout<<pow(3)<<endl;
    /*
    Rectangle rectangle;
    rectangle.length=10;
    rectangle.width=5;
    //Output of overloads
    cout << area(rectangle.length, rectangle.width)<<endl;
    cout << area(rectangle.length)<<endl;
    cout <<area(rectangle)<<endl;*/

    return 0;
}
