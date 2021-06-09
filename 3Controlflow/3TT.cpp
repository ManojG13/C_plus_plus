#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int Q;

    //(A and B and C) or (A and( (not B) or (not C))) = Q
    Q = (A && B && C) || (A && (!B || !C));

    cout<< "A" << "\t" << "B" << "\t" << "C" << "\t" << "A && B && C" << "\t" << "A && (!B || !C"<< "\t\t" << "Q" << "\n";

    cout<<"____________________________________________________________________________"<<"\n";

    cout<<A<<"\t"<<B<<"\t"<<C<<setw(10)<<(A && B && C)<<setw(20)<<(A && (!B || !C))<<setw(18)<<Q<<"\n";

    C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<setw(10)<<(A && B && C)<<setw(20)<<(A && (!B || !C))<<setw(18)<<Q<<"\n";

    B = 1;
    C = 0;
    Q = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<setw(10)<<(A && B && C)<<setw(20)<<(A && (!B || !C))<<setw(18)<<Q<<"\n";

    B = 1;
    C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<setw(10)<<(A && B && C)<<setw(20)<<(A && (!B || !C))<<setw(18)<<Q<<"\n";

    A = 1;
    B = 0;
    C = 0;
    Q = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<setw(10)<<(A && B && C)<<setw(20)<<(A && (!B || !C))<<setw(18)<<Q<<"\n";

    B = 0;
    Q = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<setw(10)<<(A && B && C)<<setw(20)<<(A && (!B || !C))<<setw(18)<<Q<<"\n";

    B = 1;
    C = 0;
    Q = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<setw(10)<<(A && B && C)<<setw(20)<<(A && (!B || !C))<<setw(18)<<Q<<"\n";

    C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    cout<<A<<"\t"<<B<<"\t"<<C<<setw(10)<<(A && B && C)<<setw(20)<<(A && (!B || !C))<<setw(18)<<Q<<"\n";

    return 0;

}