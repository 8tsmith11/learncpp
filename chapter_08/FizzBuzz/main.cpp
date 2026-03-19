#include <iostream>

void fizzbuzz(int x)
{
    using std::cout;

    for (int i = 1; i <= x; ++i)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "fizzbuzz";
        }
        else if (i % 3 == 0)
        {
            cout << "fizz";
        }
        else if (i % 5 == 0)
        {
            cout << "buzz";
        }
        else
        {
            cout << i;
        }
        cout << '\n';
    }
}

int main()
{
    fizzbuzz(15);

    return 0;
}
