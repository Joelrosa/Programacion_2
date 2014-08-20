#include <iostream>
#include<stdlib.h>
/*
ingresar la nota acumulada y examen,luego de determinar la nota final
*/

using namespace std;

int main()
{
   int na,ne,nf;
   char nombre[30];

   cout<<"nombre del aulmno";
   cin.getline(nombre,30);
   cout<< "Nota acumulada";
   cin>>na;

   cout<<"nota examen";
   cin>>ne;

   nf= na + ne;

   cout<<"nota final es:"<<nf<<"\n";
   if(nf>60)
   { cout<< "aprobado";}
   else
   { cout<<"reprobado";}

   system("pause");




    cout << "Hello world!" << endl;
    return 0;
}
