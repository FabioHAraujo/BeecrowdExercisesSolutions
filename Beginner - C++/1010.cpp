#include <iomanip>
#include <iostream>

int main ()
{
    double code1, units1, value1, code2, units2, value2;
    std::cin >> code1 >> units1 >> value1;
    std::cin >> code2 >> units2 >> value2;
    std::cout << std::fixed << std::setprecision(2) << "VALOR A PAGAR: R$ " << units1*value1+units2*value2 << std::endl;

    return 0;
}