#include <iostream>
#include<stdlib.h>

using namespace std;
//ingresar dos numero y determinar cual es el mayor

int main()
{ int n1,n2,mayor;

cout<<"ingresar el numero#1..:";
cin>>n1;

cout<<"ingresar numero#2..:";
cin>>n2;

if(n1>n2)
   {mayor=n1;}
   else
   {mayor=n2;}

   cout<<"mayor es"<<mayor<<"\n";

system("pause");

    cout << "Hello world!" << endl;
    return 0;
}
