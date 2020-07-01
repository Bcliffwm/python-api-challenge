#include <iostream>
#include <limits>

using namespace std;

void print_array(int array[], int size)
{
    for(int i =0; i<size; i++)
    {
        cout << array[i] << "\t";

    }
}

int main()
{
    const int SIZE = 100;
    int guesses[SIZE];

    int count=0;

    for(int i = 0; i < SIZE; i++)
        {
            if(cin >> guesses[i]) //only returns cin -> true of input worked
                {
                    count++;
                    // input worked
                }
                else
                {
                    //invalid character
                    break;
                }
        }

    print_array(guesses, count);
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

    string test;
    cin >> test;
    cout << test << endl;
    return 0;
}
