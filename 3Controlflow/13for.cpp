#include<iostream>

int main()
{
    float input;
    float sum = 0;

    for (int i=0;i<5;i++)
    {
        std::cout<<"enter a number\n";
        std::cin>>input;
        sum += input;
    }
    std::cout<<"sum = "<<sum<<"\n";
    std::cout<<"Average = "<< sum/5<<"\n";
    return 0;
}

