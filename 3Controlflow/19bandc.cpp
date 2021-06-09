#include<iostream>
using namespace std;
int main()
{
    int a = 0;
    while(a < 5)
    {
        cout<<"a = "<<a<<"\n";
        a++;
        if (a == 3)
            break;
    }

    cout<<"First line after first while loop \n\n";

    while (a < 15)
    {
        a++;
        if(a==10)
        {
            cout<<"when a = 10, go back to top of loop i.e., a=10 is skipped \n";
            continue;
        }
        cout<<"continue a = "<<a<<"\n";
        
    }


    return 0;
}