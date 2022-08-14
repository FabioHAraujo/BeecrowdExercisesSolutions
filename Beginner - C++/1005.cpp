#include <iostream>
#include <iomanip>
 
int main() {
 
    double A, B, MEDIA;
    std::cin >> A;
    std::cin >> B;
    MEDIA = ((A*3.5)/11)+((B*7.5)/11);
    std::cout << std::fixed << std::setprecision(5) << "MEDIA = " << MEDIA << "\n";
    
    return 0;
}