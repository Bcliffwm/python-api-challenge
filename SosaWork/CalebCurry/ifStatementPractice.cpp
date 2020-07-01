#include <iostream>
#include <string>

using namespace std;
using std::string;


int main()
{
    switch(age){
    case 17:
        cout << "You cannot vote yet" << endl;
        break;
    case 18:
        cout << "You can vote" << endl;
        break;
    default:
        cout << "How old are you?"<< endl;
        break;
    }
   return 0;
}
