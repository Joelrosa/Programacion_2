#include <iostream>
#include<stdlib.h>
using namespace std;
/* ingresar un numero y determinar cuanras cifras tiene, evaluar hasta cuatro cifras
y luego decir tiene mas de 4 cifras.
no tinene que importar el signo se evaluara el valor absoluto */

int main()
{ int num;
cout<<"ingresar Numero...:";
   cin>>num;



if((num>=0 && num<=9)||(num>=0 && num<=-9))
    cout<<"tiene una sifra";
else

 if((num>=9 && num<=99)||(num>=0 && num<=-99))
    cout<<"tiene dos sifras";
else
    if((num>=99 && num<=999)||(num>=0 && num<=-999))
    cout<<"tiene tres sifras";
else

if((num>=999 && num<=9999)||(num>=0 && num<=-9999))
    cout<<"tiene cuatro sifras";
else
if((num>=9999 && num<=99999)||(num>=0 && num<=-99999))
    cout<<"tiene mas de  cuatro sifras";
else

    cout<<"\n";
system("pause");
}
