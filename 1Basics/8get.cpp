#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userName;
    int age = 0;
    int year = 0;

    cout << "Tell me you Name! " << "\n";
    getline(cin, userName);

    cout << "How old are you? " << "\n";
    cin >> age;

    cout << "which year did you ride the bike? " << "\n";
    cin >> year;

    cout << "you're good to go! " << userName;

    return 0;
}
