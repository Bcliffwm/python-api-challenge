#include <iostream>
#include <string>

using namespace std;
using std::string;


int main()
{
    int answer = 11;
    cout << "Guess the number: ";
    int guess;
    cin >> guess;
    guess == answer ? cout << "Good job\n" : cout << "You failed";
}
