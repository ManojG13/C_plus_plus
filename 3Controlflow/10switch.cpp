#include<iostream>
using namespace std;
int main()
{
    float in1, in2;
    char operate;

    // inputs
    cout<<"enter the in1\n";
    cin>>in1;
    cout<<"enter the in2\n";
    cin>>in2;
    cout<<"+ to add\n- to subtract\n* to multiply\n/ to divide\n";
    cout<<"enter the operator\n";
    cin>>operate;
    
    cout<<in1<<"\n"<<in2<<"\n"<<operate<<"\n"; 
    // switch operation
    switch(operate)
    {
        case('+'): cout<<in1+in2;
            break;
        case('-'): cout<<in2-in2;
            break;
        case('*'): cout<<in1*in2;
            break;
        case('/'): cout<<in1/in2;
            break;
        default: cout<<"Enter the operation to be performed";
    }
    return 0;
}
