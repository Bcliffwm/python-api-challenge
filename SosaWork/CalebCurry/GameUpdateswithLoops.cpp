#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void play_game()
{
    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true)
    {
        int guess;
        cin >> guess;
        if(guess == random)
        {
            cout << "You win!\n";
            break;
        } else if (guess < random)
        {
            cout << "Too high. Guess again\n";
        } else
        {
            cout << "Too low. Guess again\n";
        }
    }
}

int main()
{
    srand(time(NULL));
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
        play_game();
        break;
    }
  }
  while(choice != 0);
}
