#include <iostream>
#include <string>

int main ()
{
  std::string name;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name);
    //getline solicita uma linha de texto e aplica em uma variável string
  std::cout << "Hello, " << name << "!\n";
    //saída do texto com a linha aplicada na variável anteriormente
  return 0;
}