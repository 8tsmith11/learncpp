#include <iostream>
#include <string_view>
#include <string>

// Prints who is older (does not calculate it, pass correct arguments)
void printOlder(std::string_view older, int olderAge, std::string_view younger, int youngerAge)
{
    std::cout << older << " (age " << olderAge << ") is older than ";
    std::cout << younger << " (age " << youngerAge << ").\n";
}

// Gets age of person name from input.
int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;
    return age;
}

// Gets name of person n from input.
std::string getName(int n)
{
    std::cout << "Enter the name of person #" << n << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int main()
{
    // Get names and ages.
    std::string name1 { getName(1) };
    int age1 { getAge(name1) };
    std::string name2 { getName(2) };
    int age2 { getAge(name2) };

    if (age1 > age2)
        printOlder(name1, age1, name2, age2);
    else if (age2 > age1)
        printOlder(name2, age2, name1, age1);
    else
        std::cout << name1 << " and " << name2 << " are the same age (" << age1 << ").\n";

    return 0;
}
