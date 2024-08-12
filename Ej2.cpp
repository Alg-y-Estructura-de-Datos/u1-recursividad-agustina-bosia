#include <iostream>
using namespace std;
/*
Ejercicio N°2
Implementar una función recursiva que determine la suma de los “n” primeros números
 naturales ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el resultado de la suma.
 */

int numnat(int num){
    if (num==1)
    {
        cout<<num<<" = ";
        return 1;
    }
    else if(num==0){
        return 0;
    }
    else{
        cout <<num<<" + ";
        return num + numnat(num-1);
    }
    
}

int main() {

    unsigned int n;
    cout<<"elija un nro natural: ";
    cin>>n;

    cout << numnat( n);
    return 0;
}
