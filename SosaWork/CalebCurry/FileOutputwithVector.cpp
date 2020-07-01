#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main()
{
    //User input to overwrite or create a new text file for data storage
    string filename;
    cin >> filename;
// Opening files
    ofstream file (filename.c_str(), ios::app);


    if(file.is_open())
        {
            cout<< "successn00b\n";
        }
    vector <string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");

    for(string name : names)
        {
            file << name << endl;
        }

    file.close();
    return 0;
}
