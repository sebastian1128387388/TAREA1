//CAMBIO EXPLICITO FLOAT A INT

// Example program
#include <iostream>
#include <string>

int main()
{
    float numer1;
    int y;
    
    std::cout << "ingrese numero flotante: " << std::endl;
    std::cin >> numer1 ;
    y = int(numer1);
    std::cout << "en entero es: " << y << std::endl;
    
  return 0;
}


//CAMBIO EXPLICITO INT A FLOAT

// Example program
#include <iostream>
#include <string>

int main()
{
    float y;
    int numer1;
    
    std::cout << "ingrese numero entero: " << std::endl;
    std::cin >> numer1 ;
    y = float(numer1);
    std::cout << "en flotante es: " << y << std::endl;
    
  return 0;
}


//CAMBIO IMPLICITO INT A FLOAT

// Example program
#include <iostream>
#include <string>

int main()
{
    int numer1;
    float numer2;
    std::cout << "ingrese numero entero: " << std::endl;
    std::cin >> numer1 ;
    numer2=numer1;
    std::cout << "en flotante es: " << numer2 << std::endl;
    
  return 0;
}

//CAMBIO IMPLICITO FLOAT A INT

// Example program
#include <iostream>
#include <string>

int main()
{
    float numer1;
    int numer2;
    ;
    std::cout << "ingrese numero flotante: " << std::endl;
    std::cin >> numer1 ;
    numer2=numer1;
    std::cout << "en entero es: " << numer2 << std::endl;
    
  return 0;
}

