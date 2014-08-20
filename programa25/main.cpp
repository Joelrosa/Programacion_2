#include <iostream>

using namespace std;
//ingresar 5 numeros pares y presentar el mayor

int main()
{
    int num;
    int mayor=0;
    int i;

    for(i=0;i<5;i++)
    {

       do
       {
           cout<<"ingresar numero...: ";
           cin>>num;
       }while (!(num%2==0));
       if(mayor<num)
                  {
                     mayor=num;
                  }

    }
    cout<<"numero mayor...: "<<mayor<<"\n";
}
