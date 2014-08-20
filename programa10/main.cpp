#include <iostream>

using namespace std;
//ingresar nota acumulada y examen del alumno, calcular la nota final,
//luego presentar cuantos aprobados y reprobados, ; luego de
//de finalizar el ciclo presentar cuantos aprobados y reprobados hay;
//aserlo para 5 alumnos
int main()
{
   int na,ne,nf,capr,crep,c;

   c=0;

   while(c<5)
   {
       cout<<"nota acumulada.....:";
       cin>>na;
       cout<<"Nota examen....:";
       cin>>ne;
       nf= na + ne;
       cout<<"nota final...:"<<nf<<"\n";

       if (nf>=60)
       {
           capr++;
           cout<<"estado Aprobado"<<"\n";
       }
       else
       {
           crep++;
           cout<<"estado Reprobado"<<"\n";
       }
        c++;

   }
   cout<<"Aprobados"<<capr<<"\n";
   cout<<"Reprobados"<<crep<<"\n";

}

