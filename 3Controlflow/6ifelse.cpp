#include<iostream>
int msin()
{
    int Target = 50;
    int Guess = 0;

    std::cout<<"Enter your marks! "<<"\n";
    std::cin>>Guess;

    //If statement
    if(Guess > Target)
    {
        std::cout<<"You're good to go!";
    }
    else if(Guess < Target)
    {
        std::cout<<"Need to Improve";
    }
    else
    {
        std::cout<<"I Appreciate";
    }
    return 0;
}