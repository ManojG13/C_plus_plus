#include<iostream>
using namespace std;
int main()
{
    float entry = 0;

    do
    {
        cout<<"entry = "<<entry<<"\n";
        entry++;
    }
    while(entry < 5);

    float otherEntry = 6;

    do
    {
        cout<<"otherEntry = "<<otherEntry<<"\n";
        otherEntry++;
    }while(otherEntry < 5);
    return 0;
}