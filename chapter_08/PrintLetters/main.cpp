#include <iostream>

int main()
{
    using std::cout;

    char letter{ 'a' };
    while (letter <= 'z')
    {
        cout << letter << ' ';
        cout << static_cast<int>(letter) << '\n';

        ++letter;
    }

    return 0;   
}
