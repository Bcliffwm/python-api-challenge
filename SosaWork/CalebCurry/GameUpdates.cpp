#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void print_array(int array[], int count)
{
    for(int i=0; i< count; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n";
}

void play_game()
{
    int guesses[250];
    int guess_count =0;

    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true)
    {
        int guess;
        cin >> guess;

        guesses[guess_count++]= guess;
        // guess_count++

        if(guess == random)
        {
            cout << "You win!\n";
            break;
        } else if (guess > random)
        {
            cout << "Too high. Guess again\n";
        } else
        {
            cout << "Too low. Guess again\n";
        }
    }
    print_array(guesses, guess_count);
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
