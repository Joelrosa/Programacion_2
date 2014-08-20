#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
generar numeros aleatorios entre 1-500, contar cuantos son numeros divisiles entre 5 y son pares ala ves, obtener su
promedio y presentarlo al final, el programa finalizara si encuentra un numero mayor a 300 0 genera 10 numero.
*/
int main()
{
   int num,conta5,npar,ppar,conta,conta2,cn5;

   conta5 = 0 ; npar = 0; ppar = 0; conta = 0; conta2 = 0;

   srand(time(0));

   cout<<"Numeros aleatorios"<<"\n";

   while(conta<10)
   {

    num = 1 + rand()%(501-1);
        if(num<=300){

            cout<<num<<"\n";
            conta++;

            if (num%5==0)
            {
                conta5++;
                cn5+=num;
            }
            if (num%2==0)
            {
                conta2++;
                npar+=num;
            }

        }
        else{
            conta=11;// al generar un numero mayor a 300 sele asigna un numero exedente al contador para que termine el ciclo
        }

   }

   ppar= npar / conta2;

   cout<<"Numeros divisibles entre 5....: "<<conta5<<endl;
   cout<<"Numeros pares..: "<<conta2<<endl;
   cout<<"Promedio Numeros pares..: "<<ppar<<endl;

}

