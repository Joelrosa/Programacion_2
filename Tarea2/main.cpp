#include <iostream>
#include<stdlib.h>
using namespace std;

int main()

{ int numero;

do{
cout<<"Ingresar numero..... ";
cin>>numero;
}
while (numero <= 0);

cout<<endl<<endl;
cout<<"numero invertido: ";

while (numero != 0)
{
cout<<numero % 10;
numero = numero / 10;

}
cout<<"\n";
system("pause");

}

