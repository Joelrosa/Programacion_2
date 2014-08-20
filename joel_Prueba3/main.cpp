#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
Ingresar el nombre del empleado, las ventas de los 7 dias de
la semana , luego pedir el turno de trabajo (1,2,3 validar el turno).

Calcular el % de comisión usando el turno

Turno                    %
comis

1                                             5%

2                                             7%

3                                             8%



El seguro
social y el total a pagar , luego preguntar si desea continuar , al final
presentar el mejor sueldo, el sueldo promedio y la suma de todos los sueldos.
*/
int main()
{
    {
    char nombre[30],resp;
    int turno,i,suma;
    double comis,pc,ventas;

   do
    {
       cout<<"ingresar Nombre del Empleado..: ";
       cin.getline(nombre,30);

   for (i=0;i<7;i++)
    {

        cout<<"ventas del dia ... : ";
        cin>>ventas;

        suma+=ventas;
    }

    do
    {
        cout<<"Turno de trabajo..: ";
        cin>>turno;
    }while (!((turno>=1)&&(turno<=3)));

    switch(turno)
    {
        case 1:
            pc=0.05;
            break;
        case 2:
            pc=0.07;
            break;
        default :
            pc=0.08;
            break;
    }

    comis = suma*pc;
    _flushall();

    cout<<"% de comision... : "<<pc<<"\n";
    cout<<"comision ganada. : "<<comis<<"\n";

       do
          {
             cout<<"Desea continuar....>";
             cin.get(resp);
            _flushall();

          } while ((resp !='S') and (resp !='N'));

    }
       while(resp!='N');
    {
       suma=ventas+comis;
    }
       cout<<"total..: "<<suma<<"\n";

    }

}

