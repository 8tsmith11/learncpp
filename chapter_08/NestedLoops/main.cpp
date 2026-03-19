#include <iostream>

int main()
{
    using std::cout;

    int i{ 1 };
    while (i <= 5)
    {
        int j { 5 };

        while (j >= 1)
        {
            if (j <= i)
            {
                cout << j << ' ';
            }
            else
            {
                cout << "  ";
            }

            --j;
        }
        cout << '\n'; 

        ++i;
    }

    return 0;
}
