#include <iostream>
#include <string>
#include <iomanip>

int main ()
{
    std::string name;
    double sal, sales;
    std::getline (std::cin,name);
    std::cin >> sal >> sales;
    std::cout << std::fixed << std::setprecision(2) << "TOTAL = R$ " << sal+sales*0.15 << std::endl;

    return 0;
}