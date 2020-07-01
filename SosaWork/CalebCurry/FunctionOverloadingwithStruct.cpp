#include <iostream>


using namespace std;

struct Rectangle
{
    double length;
    double width;
};

//All three functions overload area() in order to make its usage flexible depending on desired outcome and problem possibilities
//Standard rectangle area calculation
double area( double length, double width)
{
    return length*width;
}

//Square area calculation
double area(double length)
{
    return length*length;
}

//Struct Rectangle area calculation
double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

int main()
{
    Rectangle rectangle;
    rectangle.length=10;
    rectangle.width=5;
    //Output of overloads
    cout << area(rectangle.length, rectangle.width)<<endl;
    cout << area(rectangle.length)<<endl;
    cout <<area(rectangle)<<endl;

    return 0;
}
