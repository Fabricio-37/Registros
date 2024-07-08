#include <iostream>
#include <string>
using namespace std;
int main () {
    int n, sueldo_mayor = 0, sueldo_menor;
    cout<<"Cantidad de empleados de la empresa: "; cin>>n;
    struct empleado {
        char nombre[20];
        char sexo[10];
        float sueldo;
    }; empleado empleados[n];
    cout<<"---------------------------------"<<endl;
    for (int i=0; i<n; i++) {
        cout<<"Nombre del empleado "<<i+1<<": "; cin>>empleados[i].nombre;
        cout<<"Sexo del empleado "<<i+1<<" (M/F): "; cin>>empleados[i].sexo;
        cout<<"Sueldo del empleado "<<i+1<<": "; cin>>empleados[i].sueldo;
        cout<<"---------------------------------"<<endl;
    }
    sueldo_mayor=empleados[0].sueldo;
    for (int i=0; i<n; i++) {
        if (empleados[i].sueldo>sueldo_mayor) {
            sueldo_mayor=empleados[i].sueldo;
        }
    }
    for (int i=0; i<n; i++) {
        if(sueldo_mayor==empleados[i].sueldo) {
            cout<<"El empleado "<<empleados[i].nombre<<" tiene el sueldo mayor de: "<<sueldo_mayor<<endl;
        }
    }
    sueldo_menor=empleados[0].sueldo;
    for (int i=0; i<n; i++) {
        if (empleados[i].sueldo<sueldo_menor) {
            sueldo_menor=empleados[i].sueldo;
        }
    }
    for (int i=0; i<n; i++) {
        if(sueldo_menor==empleados[i].sueldo) {
            cout<<"El empleado "<<empleados[i].nombre<<" tiene el sueldo menor de: "<<sueldo_menor<<endl;
        }
    }
    return 0;
}