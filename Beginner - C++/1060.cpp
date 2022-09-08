#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
    float count=0, numero, aux=1;
    while (aux <=6)
    {
        cin >> numero;
        aux++;
        if (numero >=0)
        {
            count++;
        }
    }
    cout << count << " valores positivos" << endl;
    
    return 0;
}