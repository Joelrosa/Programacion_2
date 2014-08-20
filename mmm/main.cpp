#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;


int generarnum()00-+ñn
{
  int numx;
  srand(time(0));
  numx=1 + rand()%(501-1);
  return numx;
}

int sumapares(int num)
{
    int sifra,sumasifra;
    sumasifra=0;

    while(num>0)
    {
        sifra=num%10;
        if(sifra%2==0)
        {
           sumasifra+=sifra;
        }
         num=num/10;
    }
    return sumasifra;
}

void presentar(int num)
{
    int sifra,i;
   cout<<endl;
    while(num>0)
    {
        sifra=num%10;

        cout<<sifra<<" ";

        for (i=0;i<sifra;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        num=num/10;
    }
}

char pedirrespuesta()
{
    char respx;
    do
    {
        cout<<"desea continuar...(N/S).. : ";
        cin.get(respx);

        _flushall();

    }while((respx!='S') and (respx!='N'));
    return respx;

}

int main()
{
    int num,sumadepares;
    char respuesta;

    do
    {
        num =generarnum();
        sumadepares =sumapares(num);

        cout<<"numero generado: " <<num<<". Suma de sifras pares: " <<sumadepares<<"\n";

        presentar(num);
        cout<<endl;
        respuesta =pedirrespuesta();
    }while(respuesta!='N');
    cout<<endl;

}
