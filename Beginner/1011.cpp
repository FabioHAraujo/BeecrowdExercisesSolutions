#include <iostream>
#include <iomanip>
#include <math.h>

int main ()
{
    float raio;
    std::cin >> raio;
    std::cout << std::fixed << std::setprecision(3) << "VOLUME = " << (4.0/3) * 3.14159*(std::pow(raio,3)) << std::endl;

    return 0;
}