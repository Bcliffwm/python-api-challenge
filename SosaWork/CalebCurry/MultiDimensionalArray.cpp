#include <iostream>

using namespace std;

//Demonstrates how to access objects from multidimensional arrays
int main()
{

    int grades[][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    for(int row=0; row<3; row++)
        {
            for(int column=0; column<3; column++)
                {
                    cout << grades[row][column] << "\t";
                }
            cout << "\n";
        }

    return 0;
}
