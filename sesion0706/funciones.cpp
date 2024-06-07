#include <iostream>
#include "variables.h"
#include <string.h>
using namespace std;

CIUDAD ciudades[MAX_REG];
int pos = 0;

//crud
int obtPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(int id);
CIUDAD buscar(int id);
int menu();
void principal();
void pedirDatos();

void agregar(CIUDAD *c){
    ciudades[pos] = *c;
    pos++;
}

CIUDAD buscar(int id){
    CIUDAD c;
    return c;
}

int obtPos(int id){
    for (int i = 0; i < pos; i++)
    {
        if(id == ciudades[i].id == id){
            return i;
        }
    }
    return -1;
}

void editar(CIUDAD *c, int id){
    int posi = obtPos(id);
    strcpy(ciudades.nombre[posi], c->nombre);
    strcpy(ciudades.nombre[posi], c->descripcion);
}

void eliminar(int id){
    int posi = obtPos(id);

    for(int i = posi; i<pos-1; i++){
        ciudades[i] = ciudades[i+1];
    }
    pos--;
}

int menu(int op){
    cout << "Menu \n";
    cout << "1. Agregar\n";
    cout << "2. Editar\n";
    cout << "3. Eliminar\n";
    cout << "4. Buscar\n";
    cout << "5. Mostrar Todo\n";
    cout << "6. Salir\n";
    cout << "Digite la opcion: \n";
    cin >> op;
    return op;

}

void principal(){
    int op;
    do{
        op = menu();
        switch (op)
        {
        case 1:
            pedirDatos();
            break;
        case 6:
            cout << "Adios\n";
            break;
        
        default:
            cout << "Solo hay 6\n";
            break;
        }

    }while(op !=6);
}

void pedirDatos(){
    CIUDAD ciudad;
    cout << "Datos de ciudad\n";
    cout << "ID: ";
    cin >> ciudad.id;
    cout << "Nombre: " ;
    cin >> ciudad.nombre;
    cout << "Descripcion: ";
    cin >> ciudad.descripcion;
    agregar(&ciudad);
    cout << "Registro Apagado.....\n";
}

