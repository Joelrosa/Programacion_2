#include <iostream>

using namespace std;
/*
ingresar la tabla de la multiplicasion a presentar,usar el ciclo fotm

 1 X 5 = 5
 2 X 5 = 10
 .........

*/
int main()
{
    int tabla,resp,i;
    cout<<"tabla de multiplicar a presentar....:";
    cin>>tabla;

    for(i=1;i<10;i++)
    {
        resp = i * tabla;
        cout<<i<<" x "<<tabla<<" = "<<resp<<endl;
    }
}
