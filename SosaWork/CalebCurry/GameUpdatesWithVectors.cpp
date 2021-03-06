#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void print_vector(vector<int>vector)
{
    for(int i=0; i< vector.size(); i++)
    {
        cout << vector[i] << "\t;
    }
    cout << "\n";
}

void play_game()
{
    vector <int> guesses;
    int guess_count =0;

    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true)
    {
        int guess;
        cin >> guess;

        guesses.push_back(guess);
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
    print_vector(guesses);
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
