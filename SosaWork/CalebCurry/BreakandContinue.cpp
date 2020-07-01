#include <iostream>
#include <string>

using namespace std;
using std::string;


int main()
{
   string sentence= "Hello my name is Caleb";
   for(int i=0; i<sentence.size(); i++)
    {
        if(sentence[i]== 'o')
            {
                break; //or continue
            }
            cout << sentence[i] << endl;
    }
    cout << "Done\n";
}
