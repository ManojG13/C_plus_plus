// Logical Operators
#include <iostream>
#include <string>
int main()
{
    int A = 5;
    int B = 6;
    int C = 7;
    int D = 8;

    std::string TorF[] = {"False", "True" };
    //Using relational
    std::cout<<"check A<B "<<TorF[A<B]<<"\n";
    std::cout<<"check C>D "<<TorF[C>D]<<"\n";
    std::cout<<"Check A equals C  "<<TorF[A==C]<<"\n";

    //Using both relational and Logica
    std::cout<<"check through AND "<<TorF[A>B && C<D]<<"\n";
    std::cout<<"check through OR "<<TorF[A>B || C<D]<<"\n";
    std::cout<<"check NOT "<<TorF[!(A==C)];

    return 0;
}