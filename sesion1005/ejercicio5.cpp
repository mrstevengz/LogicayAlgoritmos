#include <iostream>
using namespace std;

int main() {
    int numero, maximo;
    int contador = 0;

    cout << "Por favor, ingrese un numero entero: ";
    cin >> numero;
    maximo = numero;
    contador++;

    while(contador < 10) {
        cout << "Por favor, ingrese otro numero entero: ";
        cin >> numero;

        if(numero > maximo) {
            maximo = numero;
        }

        contador++;
    }

    cout << "El numero más grande es: " << maximo << endl;

    return 0;
}