#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double numero;
    cin >> numero;
    if (numero >=0 and numero <=25.0000)
    {
        cout << "0,25";
    }
    else if (numero >=25.00001 and numero <=50.0000000)
    {
        cout << "25,50";
    }
    else if (numero >=50.0000001 and numero <=75.0000000)
    {
        cout << "50,75";
    }
    else if (numero >=75.0000001 and numero <=100)
    {
        cout << "75,100";
    }
    else
    {
        cout << "errou";
    }


    return 0;
}