

// Precondicion: @secuenciaNumeros es un array de tamaño igual al doble del parametro @n
// Post: Devuelve true si los digitos son correctos para un @n dado. Sino devuelve false
bool TieneDigitosCorrectos(int secuenciaNumeros[], unsigned int n){
	int i = 0;
	int qElementos = 2 * n;
	while(i < qElementos && secuenciaNumeros[i] <= n){
		i++;
	}
	return i == qElementos ? true : false;
}


//Pre: @secuenciaNumeros tiene los digitos correctos para Langford
//Post: Devuelve true si las repeticiones de los elementos son exactamente dos. Caso contrario, false
bool TieneRepeticionesPermitidas(int secuenciaNumeros[], unsigned int n){
	
	//Hasta el numero n
	int qApariciones = 0;
	int qElementos = 2 * n; 
	for(int numero = 1; numero <= n; numero++){
		for(int i = 0; i < qElementos; i++){
			if(secuenciaNumeros[i] == numero){
				qApariciones++;;
				if(qApariciones > 2){
					return false;
				}
			}
		}
		// Reinicio contador
		qApariciones = 0;
	}
	return true;
}

//Pre: @secuenciaNumeros es un arreglo de enteros y @n entero
//Post: Devuelve el indice del elemento buscado, caso contrario devuelve -1
int buscarIndice(int numero, int secuenciaNumeros[], int n){
	int i = 0;
	int qElementos = 2 * n;
	while(i < qElementos && numero != secuenciaNumeros[i]){
		i++;
	}
	return i == qElementos ? -1 : i;
	
	
}

//Pre: @secuenciaNumeros cumple la validación de @TieneRepeticionesPermitidas
//Post: Devuelve true si @secuenciaNumeros respeta las posiciones del patron Langford
bool TienePosicionesCorrectas(int secuenciaNumeros[], int n){
	// Recorro todos los digitos hasta n
	for (int numero = 1; numero <= n; numero++){
		int indice = buscarIndice(numero, secuenciaNumeros, n);
		int indiceLangford = indice + secuenciaNumeros[indice] + 1;
		if(numero != secuenciaNumeros[indiceLangford]){
			return false;
		}
	}
	return true;
	
}

