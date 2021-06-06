//TRABAJO FINAL ESTRUCTURAS DE DATOS
//PADRÓN VEHICULAR
//JUAN CARLOS SOLÓRZANO CASTANEDO
//TDA: LDEA
#include <iostream>
using namespace std;


struct vehiculo { //Estructura
    char modelo[20];
    int anio;
    int noPuertas;
    char color[20];
    char placas[7];
    char propietario[20];
    float tenencia;
    int infracciones;
    vehiculo* siguiente;
    vehiculo* atras;
} *primero, *ultimo;// Fin Estructura

void nombreLogo(){ //Funcion para mostrar el nombre y logo del programa
 cout<<"                                                        _________________________   \n";
 cout<<"                   /\\      _____          _____       |   |     |     |    | |  \   \n";
 cout<<"    ,-----,       /  \\____/__|__\_    ___/__|__\___   |___|_____|_____|____|_|___\ \n";
 cout<<" ,--'---:---`--, /  |  _     |     `| |      |      `| |                    | |    \ \n";
 cout<<"==(o)-----(o)==J    `(o)-------(o)=   `(o)------(o)'   `--(o)(o)--------------(o)--' \n";
 cout<<"`````````````````````````````````````````````````````````````````````````````````````\n";
 cout<<"          P   A   D   R   O   N            V   E   H   I   C   U   L   A   R   ";
}; //Fin Funcion

void menu(){ //Función que despliega el menú
int opc;
cout<<"\n\nMenu de opciones: \n\n";
cout<<"1. Dar de alta un nuevo vehiculo\n";
cout<<"2. Dar de baja un vehiculo existente\n";
cout<<"3. Consultar la lista\n";
cout<<"4. Filtrar por año\n";
cout<<"5. Filtrar por numero de Puertas\n";
cout<<"6. Filtrar por cantidad de tenencia\n";
cout<<"7. Filtrar por numero de infracciones\n";
cout<<"8. Buscar por modelo\n";
cout<<"9. Buscar por color\n";
cout<<"10. Buscar por placas\n";
cout<<"11. Buscar por propietario\n";
cout<<"12. Salir del programa\n";
cout<<"\nSeleccione la opcion a realizar: ";
cin>>opc;
} //Fin función menu

void insertarVehiculo(){ //Función para insertar un nuevo elemento al inicio de la lista

vehiculo* nuevo = new vehiculo(); //Reserva memoria para un nuevo vehiculo

cout<<"Ingresa el modelo del vehiculo: ";
cin>> nuevo->modelo;
cout<<"Ingresa el año del vehiculo: ";
cin>> nuevo->anio;
cout<<"Ingresa el numero de puertas del vehiculo: ";
cin>> nuevo->noPuertas;
cout<<"Ingresa el color del vehiculo: ";
cin>> nuevo->color;
cout<<"Ingresa las placas del vehiculo: ";
cin>> nuevo->placas;
cout<<"Ingresa el nombre del propietario del vehiculo: ";
cin>> nuevo->propietario;
cout<<"Ingresa la cantidad de tenencia del vehiculo: ";
cin>> nuevo->tenencia;
cout<<"Ingresa la cantidad de infracciones que tiene el vehiculo: ";
cin>> nuevo->infracciones;

if (primero == NULL){ //If
    primero= nuevo;
    primero->siguiente = NULL;
    primero->atras = NULL;
    ultimo = primero;
} //Fin de If
else { //Else
    ultimo->siguiente = nuevo;
    nuevo->siguiente = NULL;
    nuevo->atras = ultimo;
    ultimo = nuevo;
} //Fin de Else
cout<<"\n Vehiculo registrado \n\n";
} //Fin función InsertarVehiculo
/////////////////////////////////////////////////////////////////////////////////////////


int main(){ //Función main
 insertarVehiculo(); //Probando funcion insertarVehiculo
};  //Fin funcion main

