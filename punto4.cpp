//PUNTO 4 TAREA NUMERO DE 5 DIGITOS Y SEPARAR CADA DIGITO CON 3 ESPACIOS

#include <iostream>
#include <string>

using namespace std;
int main()
{
     int a, d1, d2, d3, d4, d5, r;
     
     cout<<"Ingrese un numero de 5 digitos"<<endl;
     cin>>a;
     
     d1=a/10000;
     r=a%10000;
     d2=r/1000;
     r=r%1000;
     d3=r/100;
     r=r%100;
     d4=r/10;
     r=r%10;
     d5=r;
     
     cout<<"El numero es:  "<<d1<<"   "<<d2<<"   "<<d3<<"   "<<d4<<"   "<<d5<<"   ";
     
     return 0;
}