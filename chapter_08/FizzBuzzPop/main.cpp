#include <iostream>

void fizzbuzzpop(int count)
{
    using std::cout;

    for (int i{ 1 }; i <= count; ++i)
    {
        if (i % 3 == 0)
        {
            cout << "fizz";
        }
        if (i % 5 == 0)
        {
            cout << "buzz";
        }
        if (i % 7 == 0)
        {
            cout << "pop";
        }
        if (i % 3 && i % 5 && i % 7)
        {
            cout << i;
        }
        cout << '\n';
    }
}

int main()
{
    fizzbuzzpop(150);

    return 0;
}
