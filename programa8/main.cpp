#include <iostream>
#include<stdlib.h>


using namespace std;
/* se ingresa el nombre del aspirante, la edad y si tiene tituilo (1 o 0),experiencia,
(1 o 0)luego se imprime si esta contratado o no lo esta.
si la edad esta entre 22-27 y tienen titulo se contrata o si tiene 15 anos de experiencia */

int main()
{ int titulo, expe, edad;
char nombre [30];

    cout<<"ingresar el nombre del empleado.....:";
cin.getline(nombre,30);

cout<<"tiene titulo...:";
cin>>titulo;


cout<<"edad...:";
cin>>edad;

if ((((edad>1)and (edad<=27)) and (titulo==1)) or
    (expe>15))
    cout<<"contratado";
else
    cout<<"vuelva ha intentarlo no esta contratado";

cout<<"\n";
system("pause");



    cout << "Hello world!" << endl;
    return 0;
}
