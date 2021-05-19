/* use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program */

#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    // inputs
    int target = 55;
    string userInput;
    int guess = -1;

    while(guess != target)
    {
        cout<<"enter a number between 0 and 100 \n";
        cin>>userInput;
        stringstream(userInput)>>guess;
        cout<<"guessed number = "<<guess<<endl;

        if (guess > target)
            cout<<"your guess is too high \n";
        else if (guess < target)
            cout<<"your guess is too low \n";
        else
            cout<<"you guessed correctly \n";

        if (guess == -1)
        {
            cout<<"goodbye! \n";
            break;
        }
    }
    return 0;
}