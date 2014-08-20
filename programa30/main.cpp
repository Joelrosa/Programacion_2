#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
/*
generar un numero 1-100 usando una funcio , luego elaborar una funcion que nos
debuelva la respuesta validando S o N.
pedir los numeros y presentar la suma.
*/


int num,suma,mayor;
char resp;

int aleatorio1_100()
{
    int numx;
    srand(time(0));// generar nueva semilla
    numx = 1 + rand()%(101-1);
    return numx;
}

char pedirrespuesta()
{
    char respx;

    do
    {
        cout<<"desea continiar... : ";
        cin.get(respx);
        _flushall();
    } while ((respx !='S') and (respx !='N'));
    return respx;
}

void sumanum(int num , int &suma)
{
    suma +=num;
}

int maximo(int num , int mayor)
{
    if(num>mayor)
    {
        return num;
    }
    else
    {
        return mayor;
    }
}

int main()
{
    do
    {
        num = aleatorio1_100();
        cout<<"Numero generador es... : "<<num<<"\n";

        resp = pedirrespuesta();

        sumanum(num,suma);

        mayor = maximo(num,mayor);

    } while (resp!='N');

    cout<<"Suma de los numeros... : "<<suma<<"\n";
    cout<<"Numero mayor... : "<<mayor<<"\n";

}
