#include <iostream>

using namespace std;
/*
Ingresar un numero entero , luego  sumar los dígitos  que tiene el numero, contar cuantos son pares e impares y obtener el promedio de los dígitos del numero.
ejemplo
257
Promedio 7
pares 1
impares 2
Suma 14

*/
int main()
{  int numero,sifra,suma;
    int npar,imp,prom;
     numero=0;
     suma=0;
     npar=0;
     imp=0;
     prom=0;

     cout<<"ingresese numero  : ";
     cin>>numero;

        while(numero>0)
        {

            sifra=numero%10;
            numero= numero/10;

            suma=sifra+ suma;
            if(sifra%2==0)
                {
                    npar++;
                }
                else
                {
                    imp++;
                }



        }
     prom= suma/(npar+imp);

     cout<<"Promedio.. : "<<prom<<"\n";
     cout<<"Suma..: "<<suma<<"\n";
     cout<<"Numeros Pares.. : "<<npar<<"\n";
     cout<<"Numeros impares.: "<<imp<<"\n";

}
