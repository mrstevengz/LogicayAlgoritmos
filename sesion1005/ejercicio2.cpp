/*Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial.*/

#include <iostream>
using namespace std;

int main()
{
    int number, fact=1;
    cout << "Ingrese un numero: ";
    cin >> number;

    if (number > 0){
        while(number != 1){
            fact *= number;
            number--;
        }
        cout << "El factorial es: " << fact << endl;
    } else{
        cout << "Debe ingresar un numero positivo";
    }
}