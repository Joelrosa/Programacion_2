#include <iostream>
#include<stdlib.h>
using namespace std;
//Ingresar el mes , el d�a , el a�o y determinar si la fecha esta correcta.

//se tiene que validar si el mes esta correcto, si el d�a corresponde al mes y si el a�o es mayor a cero.
int main()
{
int Dia,Mes,Ao;

   cout<<"ingresar Dia...:";
   cin>>Dia;

   cout<<"ingresar Mes....:";
   cin>>Mes;

   cout<<"ingresar A�o....:";
    cin>>Ao;


    if((Dia>=1 && Dia<=30) && (Mes>=1 && Mes<=12) && (Ao>=1) ){
        cout<<"\n\nFecha Correcta\n\n";
    }
    else{
        cout<<"\n\nFecha Incorrecta\n\n";
    }
cout<<"\n";
system("pause");
}
