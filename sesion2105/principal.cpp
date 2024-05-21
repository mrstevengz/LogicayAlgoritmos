#include <iostream>
#include "variables.h"

using namespace std;

int main(int argc, char const *argv[])
{
    PERSON teacher;
    PERSON student[MAXREGISTER];
    int op;
    int i=0;
    cout << "CIF: ";
    cin >> teacher.cif;
    cout << "Nombre completo: ";
    scanf(" %[^\n]", teacher.name);
    cout << "Apellido: ";
    scanf(" %[^\n]", teacher.lastName);

    do{
        system("cls||clear");
        printf("CIF: ");
        scanf(" %[^\n]", student[i].cif);
        printf("Nombre: ");
        scanf(" %[^\n]", student[i].name);
        printf("Apellido: ");
        scanf(" %[^\n]", student[i].lastName);
        printf("Nota: ");
        scanf(" %[^\n]", student[i].grade);
        printf("Desea ingresar otro registro 1. Si \n 0. No \n Digite su Opcion: ");
        cin >> op;
        i++;
    } while (op!=0);

    printf("Datos del profesor\n CIF: %s\n", teacher.cif);
    printf("Nombre: %s %s \n", teacher.name, teacher.lastName);
    cout << "Listado de estudiantes" << endl;
    for (int j = 0; j < i; j++)
    {
        printf("Nombre: %s \n Apellidos: %s \n Nota: %d\n",
        student[j].name, student[j].lastName, student[j].grade);
    }
    return 0;
}
