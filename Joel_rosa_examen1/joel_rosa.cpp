#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

void limites(int &ls,int &li)
{
       cout<<"ingresar limite Inferior : ";
       cin>>li;

       do
       {
         cout<<"ingresar limite Superior : ";
         cin>>ls;

       }while(ls<li);

}

   int generarNumero(int ls,int li)
{
    int numx;
    srand(time(0));
    numx = li+ rand()%(ls-li);

}
int suma5 (int num)
{
    int cifra;
    int sumacifra=0;

    while (num>0)
    {
        cifra= num%10;
        if(cifra%5==0)
        {sumacifra+= cifra;}
        num= num/10;
    }
    return sumacifra;
}

int main()
{
   int num,li,ls,num5;


      limites(ls,li);
      num= generarNumero(ls,li);
      num5=suma5(num)

     cout<<"numero Generado..: "<<num<<"\n";
     cout<<"suma de multipos de 5.. : "<<num<<"\n";


}
