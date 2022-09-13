#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    double sal=0, salFim;
    cin >> sal;
    if (sal>=0 && sal<=400.00)
    {
        salFim = sal*1.15;
        cout << fixed << setprecision(2) << "Novo salario: " << salFim << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << salFim-sal << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (sal>=400.01 && sal<=800.00)
    {
        salFim = sal*1.12;
        cout << fixed << setprecision(2) << "Novo salario: " << salFim << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << salFim-sal << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (sal>=800.01 && sal<=1200.00)
    {
        salFim = sal*1.10;
        cout << fixed << setprecision(2) << "Novo salario: " << salFim << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << salFim-sal << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (sal>=1200.01 && sal<=2000.00)
    {
        salFim = sal*1.07;
        cout << fixed << setprecision(2) << "Novo salario: " << salFim << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << salFim-sal << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if (sal>=2000.01)
    {
        salFim = sal*1.04;
        cout << fixed << setprecision(2) << "Novo salario: " << salFim << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << salFim-sal << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    
    return 0;
}