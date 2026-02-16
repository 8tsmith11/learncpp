#include <iostream>

double readDouble()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

void chooseOperator(double a, double b)
{
    // Read operator from input.
    std::cout << "Enter +, -, *, or /: ";
    char op{};
    std::cin >> op;

    // Calculate Result
    double result{};
    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;
    else
        return;

    // Print result
    std::cout << a << " " << op << " " << b << " is " << result << "\n";
}

int main()
{
    double a { readDouble() };
    double b { readDouble() };
    chooseOperator(a, b);

    return 0;
}
