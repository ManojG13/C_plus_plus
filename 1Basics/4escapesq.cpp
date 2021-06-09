#include <iostream>
#include <iomanip>
//iomanip is used when we need a structred out in console
/* structred mean a specific width of space */
// we call these as ESCAPE SEQUENCES
using namespace std;

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout << "width is set at 10" <<"\n";
    cout <<"ints"<< setw(10) << "Floats"<< setw(10) << "Doubles"<<"\n";
    cout << a << setw(12) << b << setw(10) << c <<"\n";
    cout << aa << setw(12) << bb << setw(10) << cc << "\n";
    cout << aaa << setw(12) << bbb << setw(10) << ccc << "\n";
    
    cout << "width is set to tab" << "\n";
    cout << "ints"<< '\t' << "floats" << '\t' << "double";
    
    
    return 0;

}