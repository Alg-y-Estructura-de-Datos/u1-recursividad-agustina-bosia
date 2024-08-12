#include <iostream>
using namespace std;
/*
 Ejercicio N°4

 Crear un programa que emplee recursividad para calcular el mayor de los elementos
 de un vector de “n” tamaño dado por pantalla por el usuario.
 */

int tarreglo (int array[], int tam){
    if (tam==1)
    {
        return array[tam-1];
    }
    else{
        int maxantes=tarreglo(array,tam-1);
        if (maxantes>array[tam-1]){
            return maxantes;
        }
        else{
            return array[tam-1];
        }
    }
    
}

int main(){
    int tama;
    cout<<"ingrese el tamaño del arreglo: \n";
    cin>>tama;
    
    int arreglo[tama];

    for (int i=0; i<tama-1;i++){
        cout<<"ingrese el elemento "<<i+1<<" del arreglo: \n";
        cin>>arreglo[i];
    }

    cout<<"el elemento mayor de este arreglo es: "<<tarreglo(arreglo,tama);

    return 0;


}