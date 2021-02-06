#include <iostream>
using namespace std;
int main()
{
    // enum to declare enumerated types of limited values
    enum months{jan, feb, mar, apr, may, june, july, aug};
    months bestMonth;
    bestMonth = jan;
    if(bestMonth == feb)
    {
        cout << "It's a best month" << endl;
    }
    else{
        cout << "it's not a good month!" << "\n";
    }
    return 0;
}
