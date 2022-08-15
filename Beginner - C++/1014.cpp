#include <iomanip>
#include <iostream>

int main()
{
    float X, Y;
    std::cin >> X >> Y;
    std::cout << std::fixed << std::setprecision(3) << X/Y << " km/l" << std::endl;

    return 0;
}