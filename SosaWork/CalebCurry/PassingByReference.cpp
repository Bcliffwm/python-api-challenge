#include <iostream>
#include <vector>


using namespace std;

//Passing values by reference

void swap(int &a, int &b)
{
    int temp =a;
    a=b;
    b=temp;

    cout << "a: "<< a<< "\tb: " << b << "\n";
}
int main()
{
    int a=10;
    int b=20;

    swap(a,b);
    //AFTER swap, VALUES REVERT BACK TO DECLARED VALUES IN main(); Must use & in helper function to reference the memory location
    cout << "a: "<< a<< "\tb: " << b << "\n";
    return 0;
}
