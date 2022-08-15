#include <iomanip>
#include <iostream>
#include <math.h>

int main()
{
    int A, B, C, maiorAB, maior;
    std::cin >> A >> B >> C;
    maiorAB = (A+B+abs(A-B))/2;
    maior = (maiorAB+C+abs(maiorAB-C))/2;
    std::cout << maior << " eh o maior" << std::endl;

    return 0;
}