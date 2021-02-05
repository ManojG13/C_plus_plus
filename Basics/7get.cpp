#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string userName; 
    std::cout<<"Tell me your nickname?: ";
    std::getline(std::cin, userName);
    //using getline here can recognise spaces
    std::cout<<"Hello "<<userName<<"\n";
    return 0;
}