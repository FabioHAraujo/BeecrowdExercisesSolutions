#include <iostream>
#include <iomanip>
 
int main() {
 
    double A, B, C, MEDIA;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    MEDIA = A*2/10+B*3/10+C*5/10;
    std::cout << std::fixed << std::setprecision(1) << "MEDIA = " << MEDIA << "\n";
    
    return 0;
}