//elaborar un programa que solicite los nombres de cinco estudientes y que
//devuelva el nombre segun la posicion indicada.
#include <iostream>
using namespace std;
int main()
{
    char nombre[5][20];
    int i, posicion;
    cout << "Ingrese los nombres de los estudiantes: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> nombre[i];
    }
    cout << "Ingrese la posicion del nombre que desea: ";
    cin >> posicion;
    cout << "El nombre del estudiante en la posicion " << posicion << " es: " << nombre[posicion - 1] << endl;
    return 0;
}
