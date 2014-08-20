#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// generar 10 numeros aleatorios.
int main()
{
    int num,mayor,menor,ppares,pimpares,cimp,imp,par;
    int conta = 0;
    int conta2 = 0;


    srand(time(0));//generar una nueva semilla

     cout<<"Numeros aleatorios"<<endl;


     mayor = 0;
     menor = num;
     ppares = conta2; pimpares = 0; cimp = 0;
     imp = 0; par = 0;

    while(conta<10)
    {

        num = 1 + rand()%(101-1);
        //num = 30 + rand() % (41-30)
        //num = lininferior + rand() % (limitesuperior +1 -limiteinferior)
        cout<<num<<"\n";
        conta++;

        if(num>mayor)
            mayor = num;
        if(num<menor)
            menor = num;
        if (num%2==0)
       {
            conta2++;
            par+=num;
       }
       else
       {
           cimp++;
           imp+=num;
       }

    }
    ppares= par / conta2;
    pimpares= imp/ cimp;

    cout<<"Numero Mayor es..:"<<mayor<<"\n";
    cout<<"Numero menor es..:"<<menor<<"\n";
    cout<<"Numeros divisibles entre Dos..:"<<conta2<<"\n";
    cout<<"Promedio Numeros pares..:"<<ppares<<"\n";
    cout<<"Promedio Numeros impares..:"<<pimpares<<"\n";


}
