#include <iostream>
using namespace std;
#define TopeValorCampo 20
#define TopeCantidadCampos 3
#define TopeTexto 300



struct Campo{
	char valor[TopeValorCampo];
};

struct Registro{
	Campo campos[TopeCantidadCampos];
	int cantidadCampos;
};

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

int main(){
	Registro casasGameOfThrones;
	char txtCasas[TopeTexto] = "Casa Arryn,Casa Baratheon,Casa Codd";
	
	CargarRegistro(txtCasas, casasGameOfThrones);
	
//	int i, j, k;
//	j = 0;
//	k = 0;
//	for(i = 0; i < TopeTexto && txtCasas[i] != '\0'; i++){
//		
//		if(txtCasas[i] != ','){
//			casasGameOfThrones.campos[j].valor[k] = txtCasas[i];
//			cout<<casasGameOfThrones.campos[j].valor[k]<<endl;
//			k++;
//			//cout<<casasGameOfThrones.campos[j].valor[i]<<endl; 
//		}
//		else{
//			casasGameOfThrones.campos[j].valor[k] = '\0';
//			j++;
//			k = 0;
//			
//		}
//		
////		if( i + 1 < TopeTexto && txtCasas[i] != ',' && txtCasas[i+1] != ',' ){
////			casasGameOfThrones.campos[j].valor[i] = txtCasas[i];
////		}
////		else{
////			//aumento contador
////		}
//		
//		
//	}
//	casasGameOfThrones.campos[j].valor[i] = '\0';
//	casasGameOfThrones.cantidadCampos = j + 1;
	
	cout<<casasGameOfThrones.campos[0].valor<<endl;
	cout<<casasGameOfThrones.campos[1].valor<<endl;
	cout<<casasGameOfThrones.campos[2].valor<<endl;
	
	return 0;
}
