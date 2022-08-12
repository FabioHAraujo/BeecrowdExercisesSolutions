#include <iostream>
#include <math.h>
#include <iomanip>
 
int main()
{
    double area, pi, raio;
    pi = 3.14159;
    std::cout << "Insira o Raio do Circulo" "\n";
    std::cout << "R=";
    std::cin >> raio;
    area=pi*(std::pow(raio,(2)));
    std::cout << std::fixed << std::setprecision(4) << "A=" << area << std::endl;

    return 0;
}