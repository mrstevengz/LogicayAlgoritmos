/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[10];
    int i = 0;
    int pares = 0, impares = 0;
    cout << "Ingrese 10 numeros enteros: " << endl;
    while (i <10)
    {
        cin >> numbers[i];
        i++;
        if (numbers[i] % 2 == 0){
            pares++;
        } else{
            impares++;
        }
    }
    cout << "La cantidad de numeros pares son: " << pares << endl;
    cout << "La cantidad de numeros impares son: " << impares;
    return 0;
}
