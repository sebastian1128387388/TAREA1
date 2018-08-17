

//DECIR SI ES PAR, IMPAR O CERO

// Example program
#include <iostream>
#include <string>

int main()
{
    
    int numer1;
    int numer2;
    int par;
    
std::cout << "ingrese numero: "<< std::endl;
std::cin >> numer1;
(numer1==0) ? std::cout<< " el numero es 0 ":((numer1 % 2 == 0) ? (std::cout << "el numero es par " << std::endl):(std::cout << "el numero es impar " << std::endl));


return 0;

}
