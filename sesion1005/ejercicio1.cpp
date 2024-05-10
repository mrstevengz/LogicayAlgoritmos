/*Escribe un programa que pida al usuario ingresar números enteros positivos y
calcule la suma de todos los números ingresados hasta que el usuario ingrese un
número negativo*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number=0, sum=0;

    while(number >= 0){
        sum += number;
        cout << "Ingrese un numero: ";
        cin >> number;
    }
    cout << "La suma es: " << sum << endl;
    return 0;
}
