#include<iostream>
using namespace std;
int main()
{
    float no1, no2;
    char operate;
    float answer;

    cout<<"enter the no1 and no2:\n";
    cin>>no1;
    cin>>no2;

    cout<<"select an operation to perform\n(+) to add,\n(-) to subtract,\n(*) to multiply,\n(/) to divide\n";
    cin>>operate;

    switch(operate)
    {
        case('+'): {
            answer = no1 + no2;
            break;
        }
        case('-'): {
            answer = no1 - no2;
            break;
        }
        case('*'): {
            answer = no1 * no2;
            break;
        }
        case('/'): {
            answer = no1 / no2;
            break;
        }
        default: cout<<"Enter valid operation to be performed";
    }
    cout<<no1<<operate<<no2<<"="<<answer<<"\n";
    return 0;
}