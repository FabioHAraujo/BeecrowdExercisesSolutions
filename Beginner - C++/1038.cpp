#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
    int code, unidades;
    double valor, hotDog=4.00, xSalada=4.50, xBacon=5.00, torrada=2.00, refri=1.50;
    cin >> code;
    cin >> unidades;
    if (code == 1)
    {
        valor = hotDog*unidades;
    }
    else if (code == 2)
    {
        valor = xSalada*unidades;
    }
    else if (code == 3)
    {
        valor = xBacon*unidades;
    }
    else if (code == 4)
    {
        valor = torrada*unidades;
    }
    else if (code == 5)
    {
        valor = refri*unidades;
    }
    cout << fixed << setprecision(2) << "Total: R$ " << valor << endl;

    return 0;
}