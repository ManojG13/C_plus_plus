#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    int givenInt;
    float givenFloat;
    double givenDouble;
    string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

    // Inputs
    cout<<"Integer = \n";
    cin>>givenInt;

    cout<<"Float = \n";
    cin>>givenFloat;

    cout<<"Double = \n";
    cin>>givenDouble;

    cin.ignore();

    cout<<"character = \n";
    cin>>givenChar;

    cout<<"string = \n";
    cin.ignore();
    getline(cin, givenString);

    // Printing variables
    cout<<"Integer = "<<givenInt<<"\n";
    cout<<"Float = "<<givenFloat<<"\n";
    cout<<"Double = "<<givenDouble<<"\n";
    cout<<"String = "<<givenString<<"\n";
    cout<<"Character = "<<givenChar<<"\n";

    // Address of data
    cout<<"intAddress = "<<&givenInt<<"\n";
    cout<<"floatAdress = "<<&givenFloat<<"\n";
    cout<<"doubleAddress = "<<&givenDouble<<"\n";
    cout<<"stringAddress = "<<&givenString<<"\n";
    cout<<"characterAddress = "<<&givenString<<"\n";

    // Dereferencing or indirection
    cout<<"Value stored at givenInt address = "<<*pointerGivenInt<<"\n";
    cout<<"pointer of pointer value of givenInt = "<<**pointerPointerGivenInt<<"\n";
    
    return 0;
}