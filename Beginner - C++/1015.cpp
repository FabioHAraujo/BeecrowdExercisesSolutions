#include <iomanip>
#include <iostream>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, D;
    std::cin >> x1 >> y1 >> x2 >> y2;
    D = std::pow(x2-x1,2)+std::pow(y2-y1,2);
    std::cout << std::fixed << std::setprecision(4) << std::sqrt(D) << std::endl;
    
    return 0;
}