#include <iostream>
#include <iomanip>

int main ()
{
    float number, value, hours;
    std::cin >> number;
    std::cin >> hours;
    std::cin >> value;
    std::cout << "NUMBER = " << number << "\n";
    std::cout << std::fixed << std::setprecision(2) << "SALARY = U$ " << hours*value << std::endl;
}