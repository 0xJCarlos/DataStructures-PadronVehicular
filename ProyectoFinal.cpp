//TRABAJO FINAL ESTRUCTURAS DE DATOS
//PADRÓN VEHICULAR
//JUAN CARLOS SOLÓRZANO CASTANEDO
//TDA: LDEA
#include <iostream>
using namespace std;

void insertarVehiculo(void);

struct vehiculo { //Estructura
    int ID;
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

} //Fin función menu

void escogerMenu(char opc){
cout<<"\nSeleccione la opcion a realizar: ";
cin>>opc;

switch(opc) {
case 1:
    insertarVehiculo();
    break;
case 2:
    cout<<"Aun no hay una función para eso lol";
    break;

}


}

void insertarVehiculo(){ //Función para insertar un nuevo elemento al inicio de la lista

vehiculo* nuevo = new vehiculo(); //Reserva memoria para un nuevo vehiculo

    cout<<"Ingresa el modelo del vehiculo: ";
    cin.ignore();
    cin.getline(nuevo->modelo,20,'\n');
    cout<<"Ingresa el año del vehiculo: ";
    cin>>nuevo->anio;
    cout<<"Ingresa el numero de puertas del vehiculo: ";
    cin>>nuevo->noPuertas;
    cout<<"Ingresa el color del vehiculo: ";
    cin>>nuevo->color;
    cin.ignore(1,'\n');
    cout<<"Ingresa las placas del vehiculo: ";
    cin>>nuevo->placas;
    cin.ignore(1,'\n');
    cout<<"Ingresa el nombre del propietario del vehiculo: ";
    cin.ignore(1,'\n');
    cin.getline(nuevo->propietario,20,'\n');
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
cout<<"\nVehiculo registrado\n\n";
} //Fin función InsertarVehiculo

void eliminarVehiculo(){ //Función para eliminar un vehiculo buscandolo por su ID.
vehiculo* actual = new vehiculo();
actual = primero;
vehiculo* anterior = new vehiculo();
anterior = NULL;

int vehiculoBuscado = 0;
bool encontrado = false;

cout<<"Ingresa el dato del Vehiculo a buscar para eliminar: ";
cin>>vehiculoBuscado;

if (primero != NULL){
    while (actual != NULL && encontrado != true){
        if (actual->ID == vehiculoBuscado){
            cout<<"\nVehiculo con el ID "<<vehiculoBuscado<<" encontrado.\n";

            if (actual == primero){
                primero = primero->siguiente;
                primero->atras = NULL;
            }
            else if (actual == ultimo){
                anterior->siguiente = NULL;
                ultimo = anterior;
            }
            else {
                anterior->siguiente = actual->siguiente;
                actual->siguiente->atras = anterior;
            }

            cout<<"\nVehiculo eliminado.";
            encontrado = true;
        }
        anterior = actual;
        actual = actual->siguiente;
    }
    if (!encontrado){
        cout<<"\nEl vehiculo no pudo ser encontrado.\n\n";
    }
    else {
        cout<<"\nLa lista esta vacia.\n\n";
    }
}



}

void consultarLista(){ //Función para consultar toda la lista
}
void filtrarPorNum(){ //Filtra por ID *Cambiar para que acepte cualquier dato numerico de la estructura de vehiculos.
vehiculo *actual = new vehiculo();
actual = primero;
bool encontrado = false;
int vehiculoBuscado = 0;

cout<<"Ingrese el ID del vehiculo a buscar: ";
cin>>vehiculoBuscado;

if (primero != NULL){
    while (actual != NULL && encontrado != true){

        if (actual->ID == vehiculoBuscado){
            cout<<"\nEl vehiculo con el ID "<<vehiculoBuscado<<" ha sido encontrado.\n";
            //AQUI PONER EL COUT DE TODOS LOS ELEMENTOS DEL CARRO TIPO actual->modelo y asi
            encontrado = true;
        }
        actual = actual->siguiente;
    }
    if (!encontrado){
        cout<<"\nEl vehiculo no pudo ser encontrado.\n\n";
    }
}
else {
    cout<<"\nLa lista esta vacia.\n";
}
}
vehiculo* actual = new vehiculo();
actual = primero;
if (primero != NULL){
    while(actual != NULL){
        cout<<"\nModelo: "<<actual->modelo;
        cout<<"\nAño: "<<actual->anio;
        cout<<"\nNo. de puertas: "<<actual->noPuertas;
        cout<<"\nColor: "<<actual->color;
        cout<<"\nPlacas: "<<actual->placas;
        cout<<"\nPropietario: "<<actual->propietario;
        cout<<"\nTenencia: "<<actual->tenencia;
        cout<<"\nInfracciones: "<<actual->infracciones;
        cout<<"\n----------------------------------------";
        actual = actual->siguiente;
    }
}
else {
    cout<<"\nLa lista esta vacia. Por favor agrega vehiculos.";
}

}
/////////////////////////////////////////////////////////////////////////////////////////


int main(){ //Función main
insertarVehiculo();
insertarVehiculo();
consultarLista();

};  //Fin funcion main

