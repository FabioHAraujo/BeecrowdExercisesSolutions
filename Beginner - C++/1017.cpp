#include <iomanip>
#include <iostream>

int main()
{
    float speed , time;
    std::cin >> time >> speed;
    std::cout << std::fixed << std::setprecision(3) << time*speed/12 << std::endl;

    return 0;
}