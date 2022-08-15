#include <iomanip>
#include <iostream>

int main()
{
    float valor, vSaida, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0;
    double m100=0, m50=0, m25=0, m10=0, m5=0, m1=0.000;
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
        m100++;
    }
    while (valor >= 0.50)
    {
        valor-=0.50;
        m50++;
    }
    while (valor >= 0.25)
    {
        valor-=0.25;
        m25++;
    }
    while (valor >= 0.10)
    {
        valor-=0.10;
        m10++;
    }
    while (valor >= 0.05)
    {
        valor-=0.05;
        m5++;
    }
    while (valor >= 0.011)
    {
        valor-=0.011;
        m1++;
    }
    std::cout << "NOTAS:\n";
    std::cout << c100 << " nota(s) de R$ 100,00\n";
    std::cout << c50 << " nota(s) de R$ 50,00\n";
    std::cout << c20 << " nota(s) de R$ 20,00\n";
    std::cout << c10 << " nota(s) de R$ 10,00\n";
    std::cout << c5 << " nota(s) de R$ 5,00\n";
    std::cout << c2 << " nota(s) de R$ 2,00\n";
    std::cout << "MOEDAS:\n";
    std::cout << m100 << " moeda(s) de R$ 1,00\n";
    std::cout << m50 << " moeda(s) de R$ 0,50\n";
    std::cout << m25 << " moeda(s) de R$ 0,25\n";
    std::cout << m10 << " moeda(s) de R$ 0,10\n";
    std::cout << m5 << " moeda(s) de R$ 0,05\n";
    std::cout << m1 << " moeda(s) de R$ 0,01\n";

    return 0;
}