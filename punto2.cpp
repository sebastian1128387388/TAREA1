//CUAL NUMERO ES MAYOR

// Example program
#include <iostream>
#include <string>

int main()
{
    int numer1;
    int numer2;
    int mayor
    ;
    std::cout << "primer numero entero: " << std::endl;
    std::cin >> numer1 ;
    std::cout << "segundo numero entero: " << std::endl;
    std::cin >> numer2 ;
    mayor=(numer1>numer2) ? numer1:numer2;
    std::cout << "el numero mayor es: " << mayor << std::endl;
    
  return 0;
}