#include <iostream>
#include <string>
using namespace std;
int main () {
    int n, c = 0, prom, s = 0;
    cout<<"Cantidad de personas: "; cin>>n;
    struct persona {
        char nombre[20];
        int dni;
        int edad;
    }; persona personas[n];
    cout<<"---------------------------------"<<endl;
    for (int i=0; i<n; i++) {
        cout<<"Nombre: "; cin>>personas[i].nombre;
        cout<<"DNI: "; cin>>personas[i].dni;
        cout<<"Edad: "; cin>>personas[i].edad;
        cout<<"---------------------------------"<<endl;
    }
    for (int i=0; i<n; i++) {
        if(personas[i].edad > 50) {
            c++;
        }
    }
    for (int i=0; i<n; i++) {
        s = s + personas[i].edad;
    }
    prom = s / n;
    cout<<"Hay "<<c<<" personas mayores"<<endl;
    cout<<"El promedio de las edades de todas las personas es "<<prom<<endl;
    cout<<"__________________________________________________________"<<endl;
    cout<<" "<<endl;
    cout<<"ESTOS SON LOS DATOS DE TODAS LAS PERSONAS REGISTRADAS"<<endl;
    cout<<"---------------------------------"<<endl;
    for (int i=0; i<n; i++) {
        cout<<"Nombre: "<<personas[i].nombre<<endl;
        cout<<"DNI: "<<personas[i].dni<<endl;
        cout<<"Edad: "<<personas[i].edad<<endl;
        cout<<"---------------------------------"<<endl;
    }
}