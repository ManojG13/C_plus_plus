#include <iostream>
#include <string>
#include <sstream>
//string stream is used to convert stringvariable to numeric variable
using namespace std;
 
int main()
 {
    string stringLen, stringWid;
    float length = 0;
    float width = 0;
    float area = 0;
     
    cout << "enter the length" << "\n";
    getline(cin, stringLen);
    stringstream(stringLen) >> length;

    cout << "enter the width" <<"\n";
    getline(cin, stringWid);
    stringstream(stringWid) >>  width;
     
    area = length * width;
     
    cout << "the area is " << area <<"\n";
     
    return 0;
 }