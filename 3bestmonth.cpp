#include <iostream>
using namespace std;
int main()
{
    enum months{jan, feb, mar, apr, may, june, july, aug};
    months bestMonth;
    bestMonth = feb;
    if(bestMonth == feb)
    {
        cout << "may be feb is not a best month" << endl;
    }
    return 0;
}
