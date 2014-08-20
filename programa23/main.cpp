#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
// ingresar el nombre del empleado,las ventas del mes y el turno del trabajo (1,2,3 validarlo) luego determinar el %
// de comision del turno
/*
turno  %comision
1          5%
2          6%
3          7%
*/
int main()
{
    char nombre[30],resp;
    int turno;
    double comis,pc,ventas;

   do
   {
       cout<<"ingresar Nombre del Empleado..: ";
       cin.getline(nombre,30);
       cout<<"ventas del mes ... : ";
       cin>>ventas;

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
            pc=0.06;
            break;
        default :
        pc=0.07;
        break;
    }

    comis=ventas * pc;
    _flushall();
    cout<<"% de comision... : "<<pc<<"\n";
    cout<<"comision ganada. : "<<comis<<"\n";

    do
    {
        cout<<"Desea continuar....>";
        cin.get(resp);
        _flushall();

    } while ((resp !='S') and (resp !='N'));

   }while(resp!='N');
}
