/*
Ejercicio N°5
Crear un programa que pida al usuario un número entero positivo "n" y un dígito "d".
 Luego crear una función recursiva que determine si “d” está en “n”. Si está,
 la función debe retornar verdadero y si no está debe retornar falso.
Ej.: si n=1323 y d = 5, retorna Verdadero y si d= 1 retorna falso.
*/

#include <iostream>
using namespace std;

bool search(int n,int d){
    if (n==0){
        return 0;
    }
    if (n%10==d){
        return 1;
    }
    else{
        return search(n/10,d);
    }
}

int main(){
    int n, d;

    cout <<"ingrese un nro positivo: \n";
    cin>>n;
    cout <<"ingrese un digito: \n";
    cin>>d;

    if(search(n,d)){
        cout<<"el digito ingresado existe en el numero \n";
    }
    else{
        cout<<"el dígito ingresado NO existe en el número \n";
    }
    return 0;
}