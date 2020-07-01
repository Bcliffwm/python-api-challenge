#include <iostream>

using namespace std;

int main()
{
    int guesses[] = {12,43,23,43,23};
    int num_elements = 5;
    int size = sizeof(guesses) / sizeof(guesses[0]);

    cout << size << endl;

    for(int i =0; i<num_elements; i++)
    {
        cout << guesses[i] << "\t";
    }
    return 0;

}
