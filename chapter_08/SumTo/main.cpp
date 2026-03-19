#include <iostream>

constexpr int sumTo(int value)
{
    int sum{ 0 };
    for (int i = 1; i <= value; ++i)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    using std::cout;
    using std::cin;

    cout << "Enter an integer: ";
    
    int x{};
    cin >> x;

    cout << "Sum of all numbers from 1 to " << x << ": ";
    cout << sumTo(x) << '\n';

    return 0;
}
