#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
presentar 10 numeros usando el ciclo for

*/
int main()
{
   srand(time(0)); //genrar nueva semilla
   int num,i;// variables

   for ( i = 0 ; i < 10; i++) //for (inicializar variable;condicion;incremento)
   {
       num = 1 + rand() % (101-1);

       cout<<i<<"....>"<<num<<endl;
   }   //final del ciclo


}
