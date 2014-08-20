#include <iostream>
#include<stdlib.h>
using namespace std;
/*ingresar el nombre del alumno, la nota acumulada y examen calcular
la nota final y ajustarla a 60 si esta entre 57-59
determinar la observacion con la siguiente tabla
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 spbresaliente */
int main()
{ char nombre [30];
int na,ne,nf;

cout<<"ingresar nombre del alumno....:";
cin.getline(nombre,30);

cout<<"ingresar la nota acumulada....:";
cin>>na;

cout<<"ingresar nota de examen.....:";
cin>>ne;

nf=na+ne;

if ((nf>=57) && (nf<=60))
nf=60;

cout<<"Nota final"<<nf<<"\n";
if((nf>=1) && (nf<=60))
    cout<<"Reprobada";
else if ((nf>=60) && (nf<=80))
    cout<<"bueno";
else if ((nf>=81) && (nf<=90))
    cout<<"muy bueno";
else if ((nf>=91) && (nf<=100))
    cout<<"sobresaliente";
else
    cout<<"nota fuera de rango";

cout<<"\n";
system("pause");


    cout << "Hello world!" << endl;
    return 0;
}
