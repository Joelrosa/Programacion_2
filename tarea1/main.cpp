#include <iostream>
#include<stdlib.h>
using namespace std;
//Ingresar el mes , el día , el año y determinar si la fecha esta correcta.

//se tiene que validar si el mes esta correcto, si el día corresponde al mes y si el año es mayor a cero.
int main()
{
int Dia,Mes,Ao;

   cout<<"ingresar Dia...:";
   cin>>Dia;

   cout<<"ingresar Mes....:";
   cin>>Mes;

   cout<<"ingresar Año....:";
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
