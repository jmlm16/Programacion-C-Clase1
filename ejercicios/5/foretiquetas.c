/* Recorrer una cadena de caracteres de nombre "cadena". Comprobar si la
* posicion i de la cadena es un igual a una letra 'a'. Si no es así continuamos
* buscando. Si es así, debemos comprobar si i+1 es una letra 's'. Si es una
* 's' iremos a una etiqueta de nombre "es_s" la cual imprimimos que tenemos
* una 'a' seguida de una 's' y devolvemos un 1. Si no es una letra 's'.
* Finalizamos la ejecución del for, imprimimos un mensaje del tipo no tenemos
* una 'a' seguida de una 's' y devolvemos 0. */

/* Bibliotecas a incluir */
#include <stdio.h>

int main(void)
{
	/* Declaración de variables */
	int i;
	char cadena[25] = "declasracion as variables";

	/* Código usando condicional for */
	for(i = 0; cadena[i] != '\0'; i++){
		if(cadena[i] == 'a'){
			if(cadena[i+1] == 's')
				goto es_s;
			else
				break;
		}
	}

	printf("No tenemos una 'a' seguida de una 's'\n");
	return 0;
	/* Declaracion de etiquetas */
es_s:
	printf("existe una 'a' seguido de 's'\n");
	return 1;
}
