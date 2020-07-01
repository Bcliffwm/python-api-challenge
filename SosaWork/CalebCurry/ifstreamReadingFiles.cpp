#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main()
{
    //READING FROM FILES
    ifstream file("tacos.txt");

    vector <string> names;
    //Using input variable to temporarily hold values we extract from file
    /* WHILE LOOP EXPECTS ONLY THE DATA TYPE THE VARIABLE CAN HANDLE*/
    string input;
    while(file >> input)
        {
            names.push_back(input);
        }
    //Printing file values to console
    for(string name :names)
        {
            cout << name << endl;
        }
    return 0;
}
