#include <iostream>
#include <vector>
#include <array>

using namespace std;

//void test(int data[])
//{
//    for(int n: data)
//    {
//    cout << n << "\t";
//    }
//
//}

int main()
{

//    STANDARD FOR LOOP
//    for(int i = 0; i < 6; i++)
//        {
//            cout << data[i] << "\t";
//        }

//    RANGE-BASED FOR LOOP
//    Not useful for calling inside function bc array passed inside range-based for loop
//    loses its array type and is treated as a pointer type
int data[]={1,2,3,4,5,6};

for(int n: data)
{
    cout << n << "\t";
}
    cout << "\n";
    return 0;
}
