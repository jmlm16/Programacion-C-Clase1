#include <stdio.h>
#include <string.h>

//Pre: Entra una letra
//Post: Devolver un 1 si la letra es una letra 'a'. Si no, devolver 0.
int es_una_A(char letra)
{
	int solucion = 0;
	
	if (letra == 'a' || letra == 'A')
		solucion = 1;
	return solucion;
}

int main()
{
	int i;
	char cadena[40] = "Hola dola pepsi cola\n";

	for (i = 1; i < strlen(cadena); i++) {
		if (es_una_A(cadena[i]))
			printf("En la posición %d tenemos una letra 'a'\n", i);
	}
}
