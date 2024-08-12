#include <iostream>
using namespace std;
/*
 Ejercicio N°6
Crear un programa que pida al usuario un número entero positivo "n". Luego implementar
 una función recursiva que cuente la cantidad de dígitos pares que ocupan posiciones
 impares (identificándolas de izquierda a derecha) en "n". Ej.: si el número es 22005
 el resultado es 2, y si fuera 1414 el resultado es 0

 */

int contarDigitosParesImpares(int n){
    if (n==0){
        return 0;
    }
    else{
        if ((n%10)%2==0){
            return 1 + contarDigitosParesImpares(n/100);
        }
        else{
            return contarDigitosParesImpares(n/100);
        }
    }
}
int main(){
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    cout << "El numero de digitos pares en posiciones impares es: " << contarDigitosParesImpares(n) << endl;
    return 0;
}