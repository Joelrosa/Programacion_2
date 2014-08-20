#include <iostream>
#include<stdlib.h>
using namespace std;
//ingresar 5 numeros y presentar la sumatoria al final del ciclo
//usar while
int main()
{
   int numero;
   int contador,suma,cont100,prom;
   contador=0;suma=0;cont100=0;

   while(contador<5)
   {
       cout<<"ingresar numero...:";
       cin>>numero;

       suma+=numero;//suma = suma + numero;

       contador ++ ;//contador = contador + 1;

if(numero>100)
    cont100++;

   }

prom=suma/contador;

   cout<<"suma de los numero....:"<<suma<<"\n";
   cout<<"Numeros mayores a 100:"<<cont100<<"\n";
   cout<<"promedio:"<<prom<<"\n";

    cout<<"\n";
system("pause");
}
