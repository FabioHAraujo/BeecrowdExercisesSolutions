#include <iomanip>
#include <iostream>
#include <math.h>

int main()
{
    int valor, rValor, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, m100=0, m50=0, m25=0, m10=0, m5=0, m1=0;
    double mValor;
    std::cin >> mValor;
    valor = mValor;
    mValor = mValor - valor;
    mValor = mValor*100;

    std::cout << "NOTAS:\n";
    while (valor >= 100)
    {
        valor -=100;
        c100++;
        std::cout << c100 << " nota(s) de R$ 100,00\n";
    }
    while (valor >= 50)
    {
        valor -=50;
        c50++;
        std::cout << c50 << " nota(s) de R$ 50,00\n";
    }
    while (valor >= 20)
    {
        valor -=20;
        c20++;
        std::cout << c20 << " nota(s) de R$ 20,00\n";
    }
    while (valor >= 10)
    {
        valor-=10;
        c10++;
        std::cout << c10 << " nota(s) de R$ 10,00\n";
    }
    while (valor >= 5)
    {
        valor-=5;
        c5++;
        std::cout << c5 << " nota(s) de R$ 5,00\n";
    }
    while (valor >= 2)
    {
        valor-=2;
        c2++;
        std::cout << c2 << " nota(s) de R$ 2,00\n";
    }
    std::cout << "MOEDAS:\n";
    while (valor >= 1)
    {
        valor-=1;
        m100++;
        std::cout << m100 << " moeda(s) de R$ 1,00\n";
    }
    while (mValor >= 50)
    {
        mValor-=50;
        m50++;
        std::cout << m50 << " moeda(s) de R$ 0,50\n";
    }
    while (mValor >= 25)
    {
        mValor-=25;
        m25++;
        std::cout << m25 << " moeda(s) de R$ 0,25\n";
    }
    while (mValor >= 10)
    {
        mValor-=10;
        m10++;
        std::cout << m10 << " moeda(s) de R$ 0,10\n";
    }
    while (mValor >= 5)
    {
        mValor-=5;
        m5++;
        std::cout << m5 << " moeda(s) de R$ 0,05\n";
    }
    while (mValor >= 1)
    {
        mValor-=1;
        m1++;
        std::cout << m1 << " moeda(s) de R$ 0,01\n";
    }
    return 0;
}