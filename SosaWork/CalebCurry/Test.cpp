#include <iostream>

using namespace std;

// Video demonstrates how to test a function using an if statement
double squared(double x)
{
    return x*x;
}

int main()
{
    if(squared(-5)==25)
        {
            cout << "Test passed\n";
        }
    return 0;
}
