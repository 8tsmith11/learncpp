#include <iostream>

double getBallHeight(double towerHeight, int t)
{
    double gravity { 9.8 };
    double height { towerHeight - (gravity * t * t / 2) };
    return height;
}

void printHeight(double towerHeight, int t)
{
    std::cout << "At " << t << " seconds, the ball is ";

    double ballHeight { getBallHeight(towerHeight, t) };

    if (ballHeight <= 0)
        std::cout << "on the ground.\n";
    else
        std::cout << "at height: " << ballHeight << " meters\n";
}

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;

    for (int t = 0; t <= 5; ++t)
    {
        printHeight(towerHeight, t);
    }

    return 0;
}
