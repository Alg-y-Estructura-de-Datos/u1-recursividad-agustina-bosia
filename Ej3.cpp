#include <iostream>
using namespace std;

    /*
 Ejercicio N°3
Implementar una función recursiva que dado un número entero lo muestre de forma
 invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de números
 negativos y mostrar primero el número a invertir y después el número invertido.

 */

void inverso(int num) {
    if (num < 10) {
        cout << num;
    } else {
        cout << num % 10;
        inverso(num / 10);
    }
}

int main() {
    int n;

    cout<<"ingrese num a invertir: "<<endl;

    try
    {
        cin>>n;
        if (n<0){
            throw invalid_argument("no se pueden ingresar nros negativos");
        }
        else{
            cout<<"nro original: "<<n<<"\n";
            cout<<"nro invertido: ";
            inverso(n);

        }
    }
    catch(const std::invalid_argument& e)
    {
        cout<<"Error: " << e.what() << "\n";
    }
    


    return 0;
}
