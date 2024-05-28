#include <iostream>
using namespace std;
#define MAX 60

 typedef struct contactinfo {
    char name[MAX];
    int edad;
    char direccion[MAX];
    char ciudad[MAX];
    char telefono[MAX];
 };

void ContactI() {
contactinfo contacto;

cout << "Ingrese su nombre completo: " << endl;
cin >> contacto.name;
cout << "Ingrese su edad: " << endl;
cin >> contacto.edad;
cout << "Ingrese su direccion: " << endl;
cin >> contacto.direccion;
cout << "Ingrese la ciudad donde reside: " << endl;
cin >> contacto.ciudad;
cout << "Ingrese su numero telefonico " << endl;
cin >> contacto.telefono;
}

int main(int argc, char const *argv[])
{
    ContactI();
    return 0;
}
