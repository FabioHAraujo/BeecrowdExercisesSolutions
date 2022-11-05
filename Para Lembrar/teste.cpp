#include <iostream>
#include <string.h>


int main() {

    char contador[10][10];

    for (int k = 0; k < 10; k++) {
        for (int n = 0; n < 10; n++)
          if (k == 0 || k == 9 || n == 0 || n == 9)
          {
            contador[k][n] = '#';
          }
          else {
            contador[k][n] = '0';
          }
    }

    for (int k = 0; k < 10; k++) {
        for (int n = 0; n < 10; n++) 
            std::cout << contador[k][n] << " ";
        std::cout << std::endl;
    }

}