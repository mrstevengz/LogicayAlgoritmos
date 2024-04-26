#include <iostream>
using namespace std;

/*Variables global*/

#define MAX 8
int nums[MAX];
int pos = 0;
int suma = 0;

void agregarNum(int num)
{
    if(pos<MAX){
        nums[pos] = num;
        pos ++;

    } else
    {
        cout << "No se puede agregar el numero" << endl;
    }
}

int sumar(int ultElem, int suma)
{
    if(ultElem == -1)
    {
        return suma;
    }
    suma = suma + nums[ultElem];
    sumar(suma, ultElem - 1);
}

void menu()
{
    int suma = 0;
    int op, num;
    cout << "Opcion 1. Agregar elemento" << endl;
    cout << "Opcion 2. Sumar" << endl;
    cout << "Opcion 3. Mostrar" << endl;
    cout << "Opcion 4. Salir" << endl;
    cin >> op;
    
    switch (op)
    {
    case 1:
        cout << "Dime un numero: ";
        cin >> num;
        agregarNum(num);
        menu();
        break;
    case 2:
        cout << "La suma es: " << sumar(suma, pos - 1) << endl;
        menu();
        break;
    case 4:
        break;
    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
