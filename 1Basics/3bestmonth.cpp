#include <iostream>
using namespace std;
int main()
{
    // enum to declare enumerated types of limited values
    enum month{jan, feb, mar, apr, may, june, july, aug};
    month bestMonth;
    bestMonth = mar;
    if(bestMonth == feb)
    {
        cout << "It's a best month" << endl;
    }
    else{
        cout << "it's not a good month!" << "\n";
    }
    return 0;
}
