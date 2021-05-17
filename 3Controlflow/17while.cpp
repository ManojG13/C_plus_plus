/* Use a while loop to prompt, 
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
*/


#include<iostream>
using namespace std;
int main()
{
    int target = 55;
    int guess = -1;
    cout<<"guess a number\n";
    cin>>guess;
    cout<<guess<<"\n";

    // use while to checl to proceed or end
    while(guess != target)
    {
        if(guess > target)
        {
            cout<<"guess is too high\n";
        }
        else if(guess < target)
        {
            cout<<"guess is too low\n";
        }
        else 
        {
            cout<<"you guessed the number\n";
        }
        if(guess = -1)
        {
        cout<<"goodbye!\n";
        break;
        }
    }

    return 0;
}