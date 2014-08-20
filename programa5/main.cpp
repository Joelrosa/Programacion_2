#include <iostream>
#include<stdlib.h>

using namespace std;
/*ingresar el numero del empleado, turno y las ventas luego determinar ek
perocentaje de comision usando el turno de trabajo, el seguro
social usando la comison y el total a pagar

turno  por_comison
1          6%
2          8%

 si el salario(comision) es mayor a 7000 la deduccion es de 245 y sino es de 0.0.35% del salario
 el total a pagar es el ingreso(comision) -el ihss
*/

int main()
{ int turno;
char nombre[30];
double ventas,comis,ihss,tp;

cout<<"Nombre del empleado...:";
cin.getline(nombre,30);

cout<<"ventas..:";
cin>>ventas;

cout<<"turno..:";
cin>>turno;

if (turno=1)//cuando se compara el signo igual e la condicion es doble

{
    comis=0.06*ventas;
}
 else
{
    comis=0.008*ventas;
}
if(comis>7000)
{
    ihss=245*comis;
}
else
{
    ihss=0.035*comis;
}

tp=comis-ihss;
cout<<"comision"<<comis<<"\n";
cout<<"ihss"<<ihss<<"\n";
cout<<"total a pagar"<<tp<<"\n";

    cout << "Hello world!" << endl;
    return 0;
}
