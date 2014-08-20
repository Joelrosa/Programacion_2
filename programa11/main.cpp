#include <iostream>

using namespace std;
//ingresar 5 numeros y contar cuantos de ellos
//son pares y cuandos de ellos son impares
int main()
{
    int num,cpar,cimp;
    int conta=0;
    cpar=0;cimp=0;

    while(conta<5)

    {
        cout<<"Ingresar los numero...:";
        cin>>num;

        if (num % 2 == 0)//mod(x1,2) == num % 2
            cpar++;

            else
                cimp++;

            conta++;

    }

    cout<<"Numero de Pares....:"<<cpar<<"\n";
    cout<<"Numero de impares...:"<<cimp<<"\n";

}
