#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main()
{
    //Reading from files
    ifstream file("tacoss.txt");

    if(file.is_open())
        {
            cout << "Good job, n00b\n";
        };
    string line;
    getline(file, line);
    cout << line << "\n";
    return 0;
}
