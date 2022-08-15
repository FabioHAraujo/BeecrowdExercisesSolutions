#include <iomanip>
#include <iostream>

int main()
{
    int valor, n100, n50, n20, n10, n5, n2, n1;
    int vSaida, c100, c50, c20, c10, c5, c2, c1;
    std::cin >> valor;
    vSaida = valor;
    n100 = 100;
    n50 = 50;
    n20 = 20;
    n10 = 10;
    n5 = 5;
    n2 = 2;
    n1 = 1;
    c100 = 0;
    c50 = 0;
    c20 = 0;
    c10 = 0;
    c5 = 0;
    c2 = 0;
    c1 = 0;

    while (valor >= 100)
    {
        valor = valor - n100;
        c100 = c100+1;
    }
    while (valor >= 50)
    {
        valor = valor - n50;
        c50 = c50+1;
    }
    while (valor >= 20)
    {
        valor = valor - n20;
        c20 = c20+1;
    }
    while (valor >= 10)
    {
        valor = valor - n10;
        c10 = c10+1;
    }
    while (valor >= 5)
    {
        valor = valor - n5;
        c5 = c5+1;
    }
    while (valor >= 2)
    {
        valor = valor - n2;
        c2 = c2+1;
    }
    while (valor >= 1)
    {
        valor = valor - n1;
        c1 = c1+1;
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