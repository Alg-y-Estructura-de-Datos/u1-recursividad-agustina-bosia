#include <iostream>
using namespace std;

/*
 Ejercicio N°1:

 Implemente una función para potencias enteras con recursividad. Definición recursiva
 para elevar un número a una potencia: Un número elevado a la potencia cero produce
 la unidad; la potencia de un número se obtiene multiplicándolo por sí mismo elevando
 a la potencia menos uno. Por ejemplo:

    32=3*(31)=3*[3*(30)]=3*(3*1)=9
 */

int potencia (int base, int exponente){
    if (exponente==0){
        return 1;
    }
    else {
        return base * potencia(base,exponente-1);
    }
}

int main() {
    int bas, expo;

    cout <<"ingrese el su base:"<<endl;
    cin>>bas;
    cout<<"ingrese su potencia:"<<endl;
    cin>> expo;

    cout<<"nro resultante: "<<potencia(bas,expo);

    return 0;
}
