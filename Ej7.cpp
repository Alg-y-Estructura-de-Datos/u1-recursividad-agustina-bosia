#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
Ejercicio N°7: Búsqueda de una Clase en el Horario Escolar.
Eres un estudiante que necesita encontrar el horario de una clase específica en tu horario semanal
de clases. Estás interesado en comparar dos tipos de búsquedas, la secuencial y la binaria.
Usando recursividad, implementa el código en lenguaje C++. Se puede usar la librería String.

Búsqueda Secuencial Recursiva:

Implementa una función recursiva que busque la clase en una lista (Vector y Librería String)
 desordenada de clases y horarios y cuente las comparaciones (if) realizadas.

Búsqueda Binaria Recursiva:

Implementa una función recursiva que busque la clase en una lista (Vector y Librería String)
 ordenada de clases y horarios y cuente las comparaciones (if) realizadas.

Requisitos:

El programa debe solicitar al usuario ingresar el número de clases, las clases y los horarios
 en la lista (Vector y Librería String). Considerar que se necesitarán un vector para las clases
 y otro vector para los horarios.

El programa debe imprimir el nombre de la clase encontrada y el horario que le corresponde.
 También debe imprimir el número de comparaciones (if) realizadas en cada tipo de búsqueda.

El programa debe impedir que se ingrese una lista desordenada para la búsqueda binaria.
 Pedile al usuario que ingrese en orden alfabético y que el programa verifique que así sea.
*/

string securecu(vector <string> clases, vector <string> horarios,string search, int i, int& count){
    
    if (i==clases.size()){
        if(clases[i]==search){
            return horarios[i];
        }
        else{
            return "no hay clases con ese nombre";
        }
    }
    else{
        if(clases[i]==search){
            return horarios[i];
        }
        else{
            count++;
            return securecu(clases,horarios,search,i+1,count);
        }
    }
}

int main()
{
    int numc,in,count=0;
    in=0;
    string search;

    cout<<"ingrese el número de clses q tiene en su horario: \n";
    cin>>numc;

    vector <string> clases(numc);
    vector <string> horarios(numc);

    for (int i=0; i<numc; i++){
        cout<<"cargue el nombre de la clase nro "<<i+1 <<": \n";
        cin>>clases[i];
        cout<<"cargue el horario de la clase nro "<<i+1 <<": \n";
        cin>>horarios[i];
    }

    cout<<"ingrese el nombre de la clase q está buscando: \n";
    cin>>search;
    

    cout<<securecu(clases,horarios,search,in,count)<<"\n"<<count;
}