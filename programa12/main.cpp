#include <iostream>

using namespace std;
//ingresar un numero y presentarlo al reves hasta de tres sifras

int main()
{
   int numero,n;
   cout<<"ingresar un numero....;";
   cin>>numero;

   if(numero>999)
   {
       cout<<"deve ser de tres sifras o menos";
   }
   else
   {
       n=numero % 10 ;
    {
       numero = numero / 10;

       cout<<n;
    }
       if(numero>0)
    {
        n=numero % 10 ;
       numero = numero / 10;

       cout<<n;
    }
       if(numero>0)
    {
        n = numero % 10;


       cout<<n;
    }


   }

}
