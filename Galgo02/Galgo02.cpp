#include <iostream>
using namespace std;

#define TopeValorCampo 20
#define TopeCantidadCampos 20
#define TopeTexto 300


struct Campo{
	char valor[TopeValorCampo];
};

struct Registro{
	Campo campos[TopeCantidadCampos];
	int cantidadCampos;
};

// Precondicion: @registroCsv es una cadena de caracteres en formato CSV
// Postcondicion: Establece todos los campos de @registro (y su cantidad de campos)
// que se encuentran en @registroCsv
void CargarRegistro(char registroCsv[], Registro &registro);

void MostrarLemasCasas(Registro casas, Registro lemas);

int main(){
	Registro casasGameOfThrones;
	Registro lemasCasasGameOfThrones;
	char txtCasas[TopeTexto] = "Casa Arryn,Casa Baratheon,Casa Codd,Casa Fowler,Casa Greyjoy,Casa Lannister,Casa Martell,Casa Stark,Casa Stokeworth,Casa Targaryen,Casa Tully,Casa Tyrell";
	char txtLemas[TopeTexto] = "Tan alto como el honor,Nuestra es la furia,Aunque todos nos desprecian,Déjame ascender,Nosotros no Sembramos,Oye mi rugido,Nunca Doblegado Nunca Roto,Se acerca el invierno,Orgullosos de ser leales,Fuego y Sangre,Familia Deber Honor,Crecer Fuerte";
	CargarRegistro(txtCasas, casasGameOfThrones);
	CargarRegistro(txtLemas, lemasCasasGameOfThrones);
	MostrarLemasCasas(casasGameOfThrones, lemasCasasGameOfThrones);
}

//void CargarRegistro(char registroCsv[], Registro &registro){
//	//TODO: Implementar esta funcion
//}

void CargarRegistro(char registroCsv[], Registro &registro){
	int i, j, k;
	j = 0;
	k = 0;
	
	for(i = 0; i < TopeTexto && registroCsv[i] != '\0'; i++){
		
		if(registroCsv[i] != ','){
			registro.campos[j].valor[k] = registroCsv[i];
			//cout<<casasGameOfThrones.campos[j].valor[k]<<endl;
			k++;
		}
		else{
			registro.campos[j].valor[k] = '\0';
			j++;
			k = 0;
			
		}
		
	}
	registro.campos[j].valor[i] = '\0';
	registro.cantidadCampos = j + 1;
	
}


void MostrarLemasCasas(Registro casas, Registro lemas){
	cout<<"Lemas de las casas de Game of Thrones"<<endl;
	for(int numeroCasa=0; numeroCasa < casas.cantidadCampos; ++numeroCasa){
		cout<<"\t"<<casas.campos[numeroCasa].valor<<": "<<lemas.campos[numeroCasa].valor<<endl;
	}
}
