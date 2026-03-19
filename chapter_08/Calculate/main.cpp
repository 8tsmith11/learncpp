#include <iostream>

int calculate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        std::cout << "ERROR: " << op << " is an invalid operator! Choose from (+, -, *, /, %)\n";
        return -1;
    }
}

int main()
{
    using std::cout;
    using std::cin;

    cout << "Enter an expression with two integer operands: ";
    int a{};
    int b{};
    char op;
    cin >> a >> op >> b;

    int result{ calculate(a, b, op) };
    if (result != -1)
    {
        cout << a << " " << op << " " << b << " = " << calculate(a, b, op) << '\n';
    }

    return 0;
}
