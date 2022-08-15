#include <iomanip>
#include <iostream>

int main()
{
    int valor, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, m100=0, m50=0, m25=0, m10=0, m5=0, m1=0;
    double mValor;
    std::cin >> mValor;
    valor = mValor*100;

    while (valor >= 10000)
    {
        valor -=10000;
        c100++;
    }
    while (valor >= 5000)
    {
        valor -=5000;
        c50++;
    }
    while (valor >= 2000)
    {
        valor -=2000;
        c20++;
    }
    while (valor >= 1000)
    {
        valor-=1000;
        c10++;
    }
    while (valor >= 500)
    {
        valor-=500;
        c5++;
    }
    while (valor >= 200)
    {
        valor-=200;
        c2++;
    }
    while (valor >= 100)
    {
        valor-=100;
        m100++;
    }
    while (valor >= 50)
    {
        valor-=50;
        m50++;
    }
    while (valor >= 25)
    {
        valor-=25;
        m25++;
    }
    while (valor >= 10)
    {
        valor-=10;
        m10++;
    }
    while (valor >= 5)
    {
        valor-=5;
        m5++;
    }
    while (valor >= 1)
    {
        valor-=1;
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