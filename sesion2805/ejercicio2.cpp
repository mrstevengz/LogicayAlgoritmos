#include <iostream>
#define MAX 100

using namespace std;

typedef struct contactinfo {
    char name[MAX];
    int edad;
    char direccion[MAX];
    char ciudad[MAX];
    char telefono[MAX];
};

contactinfo contactos[5];

void ContactI() {
    int i=0;
    cout << "Ingrese su nombre completo: " << endl;
    cin >> contactos[i].name;
    cout << "Ingrese su edad: " << endl;
    cin >> contactos[i].edad;
    cout << "Ingrese su direccion: " << endl;
    cin >> contactos[i].direccion;
    cout << "Ingrese la ciudad donde reside: " << endl;
    cin >> contactos[i].ciudad;
    cout << "Ingrese su numero telefonico " << endl;
    cin >> contactos[i].telefono;
}

void PrintContact() {
    contactinfo contacto;
    cout << "Nombre: " << contacto.name << endl;
    cout << "Edad: " << contacto.edad << endl;
    cout << "Direccion: " << contacto.direccion << endl;
    cout << "Ciudad: " << contacto.ciudad << endl;
    cout << "Telefono: " << contacto.telefono << endl;
}

int main(int argc, char const *argv[]) {
    for (int i = 0; i < 5; i++) {
        ContactI();
    }
    for (int i = 0; i < 5; i++) {
        PrintContact();
    }

    return 0;
}