#include <iostream>
#include <string.h>
using namespace std;
#define TopeValorCampo 20
#define TopeCantidadCampos 20
#define TopeTexto 300


struct coleccion_CD{
	char titulo[30];
	char artista[30];
	int numCanciones;
	float precio;
	char fecha_compra[20];
};

struct Persona{
	char nombre[20];
	int edad;
};

int main(int argc, char *argv[]) {
	
	//Persona persona1, persona2;
	
	Persona persona1[2];
	
	char nombre[20] = {"Raul"};

	/*persona1[0].nombre = {"Raul"};*/
	strcpy(persona1[0].nombre, "Raju");
	cout<<persona1[0].nombre<<endl;
	
	return 0;
}

