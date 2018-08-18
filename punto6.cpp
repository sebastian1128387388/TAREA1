// Example program
#include <iostream>
#include <string>



using namespace std;
main( )
{
string a,b,c,r;
cout<<"ingrese las tres palabras: "<<"\n";
getline(cin,a);
getline(cin,b);
getline(cin,c);
a<b ?(a<c ? r= a:r=c):(b<c ?r = b:r=c);
cout<< "orden de a a z es: "<<r;
return 0;
}