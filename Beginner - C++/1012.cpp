#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    float A, B, C;
    cin >> A >> B >> C;
    cout << fixed << setprecision(3) << "TRIANGULO: " << A*C/2 << "\n";
    cout << fixed << setprecision(3) << "CIRCULO: " << 3.14159*(C*C) << "\n";
    cout << fixed << setprecision(3) <<"TRAPEZIO: " << (A+B)*C/2 << "\n";
    cout << fixed << setprecision(3) << "QUADRADO: " << B*B << "\n";
    cout << fixed << setprecision(3) <<"RETANGULO: " << A*B << "\n";
}