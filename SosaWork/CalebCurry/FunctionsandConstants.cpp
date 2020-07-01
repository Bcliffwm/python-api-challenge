#include <iostream>
#include <vector>


using namespace std;

//Constants retain integrity of data by not allowing any changes or any calling of the data that is also not constant (i.e. any references to const int data[] such as do_something() must also have const)
void do_something(const int array[]){}
void print_array(const int data[], int size)
{
    for(int i=0; i<3; i++)
        {
            /*Line below will not work because data is in a const promise
            data++;*/
            cout << data[i] << "\t";
        }
    cout << "\n";
    do_something(data);
}


int main()
{
    int data[]={1,2,3};
    print_array(data, 3);
    cout << data[0]<< endl;

    return 0;
}
