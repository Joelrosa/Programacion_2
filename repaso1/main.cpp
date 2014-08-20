#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;
/*
generar un numero entre 1-500 ingresando una funcion
elaborar otra funcion donde nos debuelva la suma delas sifras pares de numero ingresado
elaborar un procedimiento donde se presente las sifras delos numeros con asterisco (*)

543

3***
4****
5*****

hacerlo asta que el usuario diga que no quiere continuar
*/
int generarNumero()
{
    int numx;
    srand(time(0));
    numx= 1 + rand()%(501-1);
    return numx;
}

int sumapares (int num)
{
    int cifra;
    int sumacifra=0;

    while (num>0)
    {
        cifra= num%10;
        if(cifra%2==0)
        {sumacifra+= cifra;}
        num= num/10;
    }
    return sumacifra;
}
void presentar (int num)
{
    cout<<endl<<endl;
    int cifra,i;
    while (num>0)
    {
        cifra= num%10;
        cout<<" "<<cifra<<" ";
        for(i=0;i<cifra;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        num= num/10;
    }
    cout<<endl<<endl;
}

char pedirrespuesta()
{
    char respuesx;
    do
    {
        cout<<"Desea continuar? (S/N):...";
        cin.get(respuesx);
        _flushall();
    }while ((respuesx!='S') and (respuesx!='N'));
    return respuesx;
}

int num, sumadepares;
char respuesta;

int main()
{
    do
    {
        num= generarNumero();
        cout<<"Numero generado es:"<<num<<endl;

        sumadepares= sumapares(num);
         cout<<"Suma de las cifras pares:"<<sumadepares<<endl;

        presentar(num);

        respuesta= pedirrespuesta();
        cout<<endl<<endl;

    }while (respuesta!='N');
    cout<<endl;

}
