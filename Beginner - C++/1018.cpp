#include <iomanip>
#include <iostream>

int main()
{
    int valor, vSaida, c100=0 , c50=0, c20=0, c10=0, c5=0, c2=0, c1=0;
    std::cin >> valor;
    vSaida = valor;

    while (valor >= 100)
    {
        valor -=100;
        c100++;
    }
    while (valor >= 50)
    {
        valor -=50;
        c50++;
    }
    while (valor >= 20)
    {
        valor -=20;
        c20++;
    }
    while (valor >= 10)
    {
        valor-=10;
        c10++;
    }
    while (valor >= 5)
    {
        valor-=5;
        c5++;
    }
    while (valor >= 2)
    {
        valor-=2;
        c2++;
    }
    while (valor >= 1)
    {
        valor-=1;
        c1++;
    }
    std::cout << vSaida <<"\n";
    std::cout << c100 << " nota(s) de R$ 100,00\n";
    std::cout << c50 << " nota(s) de R$ 50,00\n";
    std::cout << c20 << " nota(s) de R$ 20,00\n";
    std::cout << c10 << " nota(s) de R$ 10,00\n";
    std::cout << c5 << " nota(s) de R$ 5,00\n";
    std::cout << c2 << " nota(s) de R$ 2,00\n";
    std::cout << c1 << " nota(s) de R$ 1,00\n";

    return 0;
}