#include <iostream>
#include<string>

using namespace std;

int main()
{
    string name1, address1, phoneNumber1; 
    string name2, address2, phoneNumber2;

    //details of user1
    cout << "Tell me your name!" << "\n";
    getline(cin, name1);

    cout << "your location please!" << "\n";
    getline(cin, address1);

    cout << "your contact info" << "\n" ;
    getline(cin, phoneNumber1);

    //details of user2
    cout << "whats your name?" << "\n";
    getline(cin, name2);

    cout << "Can I know your location" << "\n";
    getline(cin, address2);

    cout << "your contact number please!" << "\n";
    getline(cin, phoneNumber2);

    // print the way

    cout << name1 << "\n";
    cout << "\t" << address1 << "\n";
    cout << "\t\t" << phoneNumber1 << "\n";

    cout << name2 << "\n";
    cout << "\t" << address2 << "\n";
    cout << "\t\t" << phoneNumber2 << "\n";

    
    return 0;
}