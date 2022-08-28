#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    double delta, A, B, C;
    cin >> A >> B >> C;
    delta = (pow(B,2))-(4*A*C);
    if (delta <0 || A==0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else {
        cout << fixed << setprecision(5) << "R1 = " << (-B + sqrt(delta))/(2*A) << endl;
        cout << fixed << setprecision(5) << "R2 = " << (-B - sqrt(delta))/(2*A) << endl;
    }
    return 0;
}