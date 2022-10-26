#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    double A, B, C, aux;
    cin >> A >> B >> C;
    if (C > A && C > B)
    {
        aux = A;
        A = C;
        C = aux;
    }
    else if (B > C && B > A)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if (A >= (B+C))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else{
        if (pow(A, 2) == pow(B,2)+pow(C,2))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }

        if (pow(A, 2) > pow(B,2)+pow(C,2))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }

        if (pow(A, 2) < pow(B,2)+pow(C,2))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (A==B && B==C)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }

        else if (A==B || B==C || A==C)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}