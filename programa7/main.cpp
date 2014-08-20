#include <iostream>
#include<stdlib.h>
using namespace std;
/*ingresar el nombre del empleado,las ventas y el turno luego calcular el %
de comision, ihss y total a pagar
turno      %comision
1             5%
2             7%
3             9%

bono:
este se da si la persona vendio mas de 50000 y es dela zona 1 o 3
el bono es  de 500 suni es de 150.
 */



int main()
{ char nombre[30];
double ventas,comis,ihss,pc,tp,bono;
int turno;

cout<<"ingresar el nombre del empleado.....:";
cin.getline(nombre,30);

cout<<"ventas del mes...:";
cin>>ventas;

cout<<"Turno del empleado....";
cin>>turno;

if(turno==1)
pc=0.05;
else if(turno==2)
pc=0.07;
else if (turno==3)
pc=0.09;
else
    pc=0;
tp= ventas * pc;
if((ventas>50000) && ((turno==1) || (turno==3)))
    bono=150;
    else
     bono=150;

if(comis>7000)
ihss=245;
else

    ihss=0.035*comis;

tp= comis-ihss;

cout<<"el porcentaje de comision....:"<<pc<<"\n";
cout<<"comision ganada...:"<<comis<<"\n";
cout<<"ihss.....:"<<ihss<<"\n";
cout<<"total a pagar....:"<<"\n";

cout<<"\n";
system("pause");



    cout << "Hello world!" << endl;
    return 0;
}
