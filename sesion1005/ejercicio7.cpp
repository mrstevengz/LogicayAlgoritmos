/*Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[5];
    int i = 0;
    cout << "Ingrese 5 numeros enteros: ";
    while (i<5)
    {
        cin >> numbers[i];
        i++;
    }

    i=0;
    while (i<5)
    {
        int j=0;
        while (j<5)
        {
            if (numbers[j] > numbers[j+1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
            j++;
        }
        i++;
    }
    cout << "Numeros ordenados" << endl;
    i = 0;
    while (i<5){
        cout << numbers[i] << endl;
        i++;
    }
    return 0;
}
