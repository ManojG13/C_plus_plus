#include <iostream>
#include <fstream>
//fstream to read and write the files
#include <string>

using namespace std;

int main()
{
    string line;
    fstream myfileI("5input.txt");
    if (myfileI.is_open())
    {
        myfileI << "\n My first name is Manoj \n" ;
        myfileI << "\n My last name is Gogu \n";
        myfileI.close();
    }
    else {
        cout << "unable to open" << '\n';
    }
    fstream myfile0("5input.txt");
    if (myfile0.is_open())
    {
        while( getline (myfile0, line))
        {
            cout << line << '\n';
        }
    }
    else cout << "unable to open" << '\n';
    return 0;
}
