#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
/*
Crear un resgistro con los siguientes datos
nombre, na,ne,nf.

elaborar un procedimiento para ingresar los datos del registro, otro para presentar los datos del registro,
una función para devolver la nota final, una función para devolver una respuesta S o N.
Hacerlo varias veces hasta que el usuario diga que no , deberá de ir presentado los datos .
al final presentar el alumno con la mejor nota.
*/

 int na,ne,nf,mayor;
 char resp,nombre[30];

 void ingresardatos(int &na,int &ne)
 {
    cout<<"Nota Acumulada. : ";
    cin>>na;

    cout<<"Nota Examen.... : ";
    cin>>ne;
 }

 void notafinal(int na,int ne,int &nf)
 {

    nf=na+ne;

 }

 char pedirrespuesta()
{
    char respx;
    do
      {
      cout<<"Desea continuar:>";
      cin.get(respx);
      _flushall();
      }while ((respx !='S')and (respx !='N'));
      return respx;



}

int main()
{
    int mayor;
    mayor =0;

    do
     {
      cout<<"Ingresar Nombre... : ";
      cin.getline(nombre,30);
     cout<<endl<<endl;
      nf=0;

      ingresardatos(na,ne), notafinal(na,ne,nf);

      nf=na+ne;

     cout<<endl<<endl;
      cout<<"Valor Nota Final.... : "<<nf<<"\n";

        if(mayor<nf)
                  {
                     mayor=nf;
                  }

       _flushall();
      resp=pedirrespuesta();

      }while(resp !='N');



  cout<<"Mejor nota.. : "<<mayor<<"\n";

}


