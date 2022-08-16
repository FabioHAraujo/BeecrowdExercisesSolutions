#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int valor, intValor;
    double mValor;
    double fValor;
    double cont = 0;
    cin >> mValor;
    valor = mValor;
    fValor = mValor - valor;
    intValor = fValor * 100;

    cout << "NOTAS:" << endl;
    while (valor >= 100)
    {
        valor = valor - 100;
        cont++;
    }
    cout << cont << " nota(s) de R$ 100,00" << endl;
    cont = 0;

    while (valor >= 50)
    {
        valor = valor - 50;
        cont++;
    }
    cout << cont << " nota(s) de R$ 50,00" << endl;
    cont = 0;

    while (valor >= 20)
    {
        valor = valor - 20;
        cont++;
    }
    cout << cont << " nota(s) de R$ 20,00" << endl;
    cont = 0;

    while (valor >= 10)
    {
        valor = valor - 10;
        cont++;
    }
    cout << cont << " nota(s) de R$ 10,00" << endl;
    cont = 0;

    while (valor >= 5)
    {
        valor = valor - 5;
        cont++;
    }
    cout << cont << " nota(s) de R$ 5,00" << endl;
    cont = 0;

    while (valor >= 2)
    {
        valor = valor - 2;
        cont++;
    }
    cout << cont << " nota(s) de R$ 2,00" << endl;
    cont = 0;

    std::cout << "MOEDAS:\n";
    while (valor >= 1)
    {
        valor = valor - 1;
        cont++;
    }
    cout << cont << " moeda(s) de R$ 1,00" << endl;
    cont = 0;

    while (intValor >= 50)
    {
        intValor = intValor - 50;
        cont++;
    }
    cout << cont << " moeda(s) de R$ 0,50" << endl;
    cont = 0;

    while (intValor >= 25)
    {
        intValor = intValor - 25;
        cont++;
    }
    cout << cont << " moeda(s) de R$ 0,25" << endl;
    cont = 0;

    while (intValor >= 10)
    {
        intValor = intValor - 10;
        cont++;
    }
    cout << cont << " moeda(s) de R$ 0,10" << endl;
    cont = 0;

    while (intValor >= 5)
    {
        intValor = intValor - 5;
        cont++;
    }
    cout << cont << " moeda(s) de R$ 0,05" << endl;
    cont = 0;

    while (intValor >= 1)
    {
        intValor = intValor - 1;
        cont++;
    }
    cout << cont << " moeda(s) de R$ 0,01" << endl;
    cont = 0;

    return 0;
}