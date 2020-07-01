#include <iostream>
#include <string>

using namespace std;
using std::string;


int main()
{
    int age = 0;
    cout << "How old are you? :" << endl;
    cin >> age;
    if(age < 18){
            cout << "You cannot vote yet." << endl;
        }
    else if(age > 18 && age < 100) {
            cout << "You can vote." << endl;
    }
    else {
            cout << "You are already dead." << endl;
    }
   return 0;
}
