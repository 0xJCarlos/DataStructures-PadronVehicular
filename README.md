# Vehicle Registry Project Repository / Repositorio del proyecto de Padrón Vehicular
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

Archive for the final project of my Data Structures class that i took on my third semester of college.

Respaldo para el proyecto final de la clase de Estructuras de Datos que tomé en tercer semestre de universidad.

## Brief Description / Descripción Breve

The objective was to creat Software that could register and delete vehicles and their data within a Stack Data Structure.
This software can also look up the entire list or filter vehicles based on their characteristics (ID, Model, Year, Number of Doors, Color, Licence plates, Owner, Tenure and Infractions).

El objetivo era crear un Software que pudiera registrar y eliminar vehículos y sus respectivos datos dentro de una Estructura de Datos de Pila.
Este software también puede consultar toda la lista de vehiculos o filtrarlos basandose en sus características (ID, Modelo, Año, Numero de Puertas, Color, Placas, Propietario, Tenencia e Infracciones).

## Technical Details / Detalles Técnicos

Each vehicle and their characteristics are built with a structure called Vehiculo, which contains the vehicle's data used in this project.
When inserting a vehicle, first, memory is reserved for one vehicle object, this vehicle being a pointer to the actual vehicle being registered, then you can proceed with inserting manually the details about the vehicle.
This process of reserving memory for an actual vehicle is used for the consulting and filtering options as well.

When deleting a vehicle, memory is now reserved for two vehicle objects, these two vehicles point to the actual and previous vehicles within the Stack.

The consulting option displays all vehicles within the Stack.
The filtering options allows you to look up for vehicles based on the numerical values avaiable for the vehicle (ID,Year,No. of Doors, Tenure and No. of Infractions).
Both of these options display all the data of the vehicles.

Cada vehiculo y sus caracteristicas están construidas con una estructura llamada Vehiculo, que contiene los datos de los vehiculos en este proyecto.
Cuando se inserta un vehiculo, primeramente, se reserva memoria para un objeto vehiculo, este vehiculo es un puntero al vehiculo siendo actualmente registrado, posteriormente se puede proceder con el insertar manualmente los deatlles del vehiculo.
Este proceso de reservar memoria para un vehiculo actual es utilizado para las opciones de consulta y filtrar de igual forma.

Cuando se elimina un vehiculo, se reserva memoria ahora para dos objetos de vehiculos, que apuntan al vehiculo actual y al vehiculo anterior dentro de la Pila.

La opción de consulta muestra todos vehiculos dentro de la Pila.
La opción de filtrar permite buscar vehiculos basandose en valores numericos disponibles para el vehiculo (ID, Año, No. de Puertas, Tenencia y No. de Infracciones)
Ambas opciones muestran todos los datos de los vehiculos.

