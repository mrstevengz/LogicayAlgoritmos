#include <iostream>
#include <locale.h>
using namespace std;
#include "funciones.cpp"

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "spanish");
    principal();
    return 0;
}
