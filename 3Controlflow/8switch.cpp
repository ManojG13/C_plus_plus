#include<iostream>
using namespace std;
int main()
{
    int movieNo = 0;
    cout<<"Whats your favorite movie?"<<"\n";
    cout<<"1.Starwars\n2.Ford vs Ferrari\n3.Mismatch"<<"\n";
    cin>>movieNo;

    switch(movieNo)
    {
        case(1): cout<<"Hey! A must watch> Lets Binge...."<<"\n";
            break;
        case(2): cout<<"Wow! This is a super awesome real story"<<"\n";
            break;
        case(3): cout<<"You need to be super cool for this. Lets give a try"<<"\n";
            break;
        default: cout<<"Enter the movieNo!";
    }
    char begin;
    cout<<"where do you want to begin from?"<<"\n";
    cout<<"A.At the beginning\nB.In the middle\nC.At the end"<<"\n";
    cin>>begin;

    switch(begin)
    {
        case('A'): cout<<"Good to start\n";
        case('B'): cout<<"Interval\n";
        case('C'): cout<<"The End\n"; 
    }
    return 0;
}