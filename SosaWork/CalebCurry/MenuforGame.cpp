#include <iostream>
#include <string>

using namespace std;
using std::string;


int main()
{
  int choice;
  do {
    cout << "0. Quit\n1. Play Game\n";
    cin >> choice;

    switch(choice)
    {
    case 0:
        cout << "Quitter!\n";
        break;
    case 1:
        cout << "Let's play!\n";
        break;
    }
  }
  while(choice != 0);
}
