#include <iostream>
#include <string>

using namespace std;
using std::string;

int main()
{
    string greeting = "What is up?";
    cout << greeting.find_first_of("!") << endl;
    if(greeting.compare("What is up?") == 0) cout << "Equals" << endl;

}
