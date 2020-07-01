#include <iostream>
#include <vector>


using namespace std;


int main()
{
    //Nested Vectors do not need the dimensional arguments
    vector <vector<int>> grades=
    {{1,2,3},
    {4,5,6},
    {7,8,9}
    };

    //Outer for loop goes through rows
    for(int row=0; row<3; row++)
        {
            //Inner for loop goes through columns
            for(int column=0; column<3; column++)
                {
                    cout << grades[row][column] << "\t";
                }
            cout << "\n";
        }

    return 0;
}
