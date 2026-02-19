#include <iostream>
#include <string>

int main()
{
    // Get name.
    std::string name{};
    std::cout << "Enter your full name: ";    
    std::getline(std::cin >> std::ws, name);

    // Get age.
    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Print age + name length.
    int total { age + static_cast<int>(name.length()) };
    std::cout << "Your age + length of name is: " << total << '\n';

    return 0;
}
