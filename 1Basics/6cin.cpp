#include <iostream>
#include <string>

int main()
{
    int year = 0;
    int age = 0;
    std::string userName;

    std::cout << "What's your favorite year?" << "\n";
    std::cin >> year;

    std::cout << "At what age did you ride the bike?" << '\n';
    std::cin >> age;

    std::cout << "Can I know your userName?" << '\n';
    std::cin >> userName; //using direct cin, without getlink spaces can't be recognised

    std::cout << "Hello! " << userName << '\n';
    return 0;
}