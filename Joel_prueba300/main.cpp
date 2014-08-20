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
     char nombre[30],resp;
     int turno,i,suma,mayor,conta,prom,total;
     double comis,pc,ventas,ihss,tp;

     mayor=0;
     total=0;
     conta=0;


       do
       {
           cout<<"ingresar Nombre del Empleado..: ";
           cin.getline(nombre,30);

           cout<<endl<<endl;

           for (i=0;i<7;i++)
             {

                cout<<"ventas del dia ... : ";
                cin>>ventas;

                suma+=ventas;
             }

            cout<<endl<<endl;
       do
         {
            cout<<"Turno de trabajo..: ";
            cin>>turno;

         } while (!((turno>=1)&&(turno<=3)));


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

          if(comis>7000)
             ihss=245;
             else
             ihss=0.035*comis;

          tp= comis-ihss;
          total+=tp;//suma de sueldos

           if(nombre[30])
          {
              conta++;
          }

          prom=total/conta;



         cout<<endl<<endl;
         cout<<"% de comision... : "<<pc<<"\n";
         cout<<"comision ganada. : "<<comis<<"\n";
         cout<<"Seguro Social. : "<<ihss<<"\n";
         cout<<"total a pagar....:"<<tp<<"\n";


         cout<<endl<<endl;


              do
            {
               cout<<"Desea continuar....>";
               cin.get(resp);
               _flushall();

            } while ((resp !='S') and (resp !='N'));

        cout<<endl<<endl;
                 if(mayor<tp)
                  {
                     mayor=tp;
                  }

      } while(resp!='N');


     cout<<"mejor sueldo...: "<<mayor<<"\n";
     cout<<"promedio de sueldo...: "<<prom<<"\n";
     cout<<"suma de sueldos...: "<<total<<"\n";


}
