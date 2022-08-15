#include <iomanip>
#include <iostream>
#include <math.h>

int main()
{
    int valor, rValor, cont = 0;
    double mValor;
    std::cin >> mValor;
    valor = mValor;
    mValor = mValor - valor;
    mValor = mValor*100;

    std::cout << "NOTAS:\n";
    while (valor >= 100)
    {
        valor -=100;
        cont++;
    }
    std::cout << cont << " nota(s) de R$ 100,00\n";
    cont = 0;

    while (valor >= 50)
    {
        valor -=50;
        cont++;
    }
    std::cout << cont << " nota(s) de R$ 50,00\n";
    cont = 0;

    while (valor >= 20)
    {
        valor -=20;
        cont++;
    }
    std::cout << cont << " nota(s) de R$ 20,00\n";
    cont = 0;

    while (valor >= 10)
    {
        valor-=10;
        cont++;
    }
    std::cout << cont << " nota(s) de R$ 10,00\n";
    cont = 0;

    while (valor >= 5)
    {
        valor-=5;
        cont++;
    }
    std::cout << cont << " nota(s) de R$ 5,00\n";
    cont = 0;

    while (valor >= 2)
    {
        valor-=2;
        cont++;
    }
    std::cout << cont << " nota(s) de R$ 2,00\n";
    cont = 0;

    std::cout << "MOEDAS:\n";
    while (valor >= 1)
    {
        valor-=1;
        cont++;
    }
    std::cout << cont << " moeda(s) de R$ 1,00\n";
    cont = 0;

    while (mValor >= 50)
    {
        mValor-=50;
        cont++;
    }
    std::cout << cont << " moeda(s) de R$ 0,50\n";
    cont = 0;

    while (mValor >= 25)
    {
        mValor-=25;
        cont++;
    }
    std::cout << cont << " moeda(s) de R$ 0,25\n";
    cont = 0;

    while (mValor >= 10)
    {
        mValor-=10;
        cont++;
    }
    std::cout << cont << " moeda(s) de R$ 0,10\n";
    cont = 0;

    while (mValor >= 5)
    {
        mValor-=5;
        cont++;
    }
    std::cout << cont << " moeda(s) de R$ 0,05\n";
    cont = 0;

    while (mValor >= 1)
    {
        mValor-=1;
        cont++;
    }
    std::cout << cont << " moeda(s) de R$ 0,01\n";
    cont = 0;
    
    return 0;
}