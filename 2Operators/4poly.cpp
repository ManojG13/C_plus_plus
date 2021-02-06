#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int coeff1, coeff2, constant;
    int exp1, exp2;
    int y;
    int x;
    
    cout<<"enter the values as below \n";
    
    cout<<"enter the coeff1 value ";
    cin>>coeff1;
    cout<<"the coeff1 is " << coeff1 << "\n";

    cout<<"enter the first exponent exp1 ";
    cin>>exp1;
    cout<<"the value of exp1 is "<<exp1<<"\n";

    cout<<" enter the coeff2 value ";
    cin>>coeff2;
    cout<<"the coeff2 value is " << coeff2 << "\n";

    cout<<"enter the second exponent exp2 ";
    cin>>exp2;
    cout<<"the value of exp2 is "<<exp2<<"\n";

    cout<<"enter the constant value ";
    cin>>constant;
    cout<<"the constant value is " << constant<< "\n";

    cout<<"enter the value of x ";
    cin>>x;
    
    y = coeff1*pow(x, exp1) + coeff2*pow(x, exp2) + constant;
    cout<< "the polynomial is " << y;
    return 0;
}