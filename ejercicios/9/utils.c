#include "utils.h"

int multiplica_numeros(int n, int m)
{
	return n * m;
}

int resta_numeros(int n, int m)
{
	return n - m;
}

int suma_numeros(int n, int m)
{
	return n + m;
}

int cambia_letras(char cadena[], char letraoriginal, char letracambiar)
{
	int indice = 0;
	int contador = 0;

	for( indice = 0; cadena[indice] != '\0'; indice++){
		if(cadena[indice] == letraoriginal){
			cadena[indice] = letracambiar;
			contador++;
		}
	}
	return contador;
}

int primera_letra(char cadena[], char letra)
{
	int posicion = -1;
	int indice = 0;

	for( indice = 0; cadena[indice] != '\0'; indice++){
		if(cadena[indice] == letra){
			posicion = indice;
			break;
		}
	}
	return posicion;
}

int tipo_de_letra(char letra)
{
	int tipo;
	
	switch (letra) {
	case 'a':
	case 'A':
		tipo = 1;
		break;
	case 'c':
	case 'C':
		tipo = 2;
		break;
	case 'e':
	case 'E':
		tipo = 3;
		break;
	default:
		tipo = 0;
		break;
	}
	return tipo;
}

int compara_cadena(char *cadena1, char *cadena2)
{
	int igualdad = 0;

	if (strcmp(cadena1, cadena2) == 0)
		igualdad = 1;
	return igualdad;
}

int cuenta_numero_letras(char cadena[], char letra)
{
	int indice;
	int contador = 0;

	for (indice = 0; cadena[indice] != '\0'; indice ++){
		if (cadena[indice] == letra)
			contador++;
	}
	return contador;
}
