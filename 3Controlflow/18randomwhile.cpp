#include<iostream>
#include<sstream>
#include<cstdlib>  //to use random function
#include<time.h>  //random generator seed

using namespace std;

int main()
{
    int target;
    string userInput;
    int guess = -1;

    srand(time(NULL));        // set seed for random numbe
    target = rand() % 100+1; // to take random b/w 1 and 100
    while(target != guess)
    {
        cout<<"guess a number between 0 and 100 \n";
        getline(cin, userInput);
        stringstream(userInput)>>(guess);
        cout<<"guessed number =  "<<guess<<endl;
        cout<<"target = "<<target<<endl;
        
        if(guess > target)
            cout<<"guess is too high \n";
        else if(guess < target)
            cout<<"guess is too low \n";
        else
            cout<<"you guessed correctly \n";
        if(guess == -1 || "q")
        {
            cout<<"goodbye";
            break;
        }
    }
    return 0;
}