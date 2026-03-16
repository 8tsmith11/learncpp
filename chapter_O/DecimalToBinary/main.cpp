#include <iostream>
#include <cstdint>

void printBit(int x, int pow)
{
    std::cout << ((x / pow) % 2);
}

// Print the binary representation of decimal x
void printBinary(int x)
{
    printBit(x, 128);
    printBit(x, 64);
    printBit(x, 32);
    printBit(x, 16);
    printBit(x, 8);
    printBit(x, 4);
    printBit(x, 2);
    printBit(x, 1);
}

int main()
{
    std::cout << "Input a number between 0 and 255: ";

    int x{};
    std::cin >> x;

    std::cout << "Binary representation: ";
    printBinary(x);
    std::cout << '\n';

    return 0;
}
