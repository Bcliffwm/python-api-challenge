#include <iostream>
#include <string>

using namespace std;
using std::string;


int main()
{
    //want something done at least once
    string password = "hellotacos123";
    string guess;
    do {
        cout << "Guess the password: ";
        cin >> guess;
    } while(guess != password);
    cout << "Welcome!" << endl;
    return 0;
}
