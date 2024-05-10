#include <iostream>
using namespace std;

int main() {
    int cantidad;
    cout << "Ingrese la cantidad de calificaciones que quiere promediar: ";
    cin >> cantidad;

    int contador = 0;
    int suma = 0;
    while(contador < cantidad) {
        int calificacion;
        cout << "Ingrese la calificacion " << (contador+1) << ": ";
        cin >> calificacion;
        suma += calificacion;
        contador++;
    }

    double promedio = static_cast<double>(suma) / cantidad;

    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}