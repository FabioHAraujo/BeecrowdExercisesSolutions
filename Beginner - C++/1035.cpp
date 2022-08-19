#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int A, B , C, D, V1, result;
    cin >> A >> B >> C >> D;
    if (B > C and D > A)
    {
        V1++;
    }
    if (B >= 0 and C >= 0)
    {
        V1++;
    }
    if ((C+D) > (A+B) and V1>=2)
    {
        V1++;
    }
    if (A%2==0)
    {
        V1++;
    }
    if (V1>=4)
    {
        cout << "Valores aceitos\n";
    }
    else
    {
        cout << "Valores nao aceitos\n";
    }
    return 0;

}