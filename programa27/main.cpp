#include <iostream>

using namespace std;
/*
crear un registro con los campos de nombre, na, ne,nf.
.
luego calcular la nf y presentar la observacion.

validar que cada una el acumulado entre  0-40 y la nota de examen entre 1-60.

*/
    struct alumno
    {
        char nombre[30];
        int na,ne,nf;

    };

    alumno al;

int main()
{
     cout<<"ingresar el nombre del alumno.. : ";
     cin.getline(al.nombre,30);

      do
    {
        cout<<"Nota acumulada...> ";
        cin>>al.na;

    }while (!((al.na>=0) and (al.na<=40)));

      do
    {
        cout<<"Nota examen...> ";
        cin>>al.ne;

    }while (!((al.ne>=1) and (al.ne<=60)));


    al.nf = al.na+al.ne;

    cout<<"Nota Final.. : "<<al.nf<<"\n";


}
