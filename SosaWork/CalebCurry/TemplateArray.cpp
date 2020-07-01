#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <vector>

using namespace std;

void print_temparray(array<int, 20> &data)
{
    for(int i =0; i < data.size(); i++)
        {
            cout<< data[i]<< "\t";
        }
    cout << "\n";
}

int main()
{
    array<int, 20> data={1,2,3,4,5,6};
    print_temparray(data);
}
