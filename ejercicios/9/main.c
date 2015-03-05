#include "utils.h"
#include <assert.h>

static int test1(void)
{
	char cadena[30] = "cadenadeprueba";
	char cadenacomp[30] = "cadenacomparacion";
	char cadenacomp2[30] = "cadenacomparacion";
	char cadenacomp3[30] = "cadenacomparacoin";

	printf("--->prueba 1.1\n");
	assert( 3 == cuenta_numero_letras( cadena, 'a'));
	assert( 1 == cuenta_numero_letras( cadena, 'r'));
	assert( 0 == cuenta_numero_letras( cadena, 'z'));
	printf("--->ok\n");
	printf("--->prueba 1.2\n");
	assert( 1 == compara_cadena( cadenacomp, cadenacomp2));
	assert( 0 == compara_cadena( cadenacomp, cadenacomp3));
	printf("--->ok\n");
	printf("--->prueba 1.3\n");
	assert( 1 == tipo_de_letra( 'a'));
	assert( 1 == tipo_de_letra( 'A'));
	assert( 2 == tipo_de_letra( 'c'));
	assert( 2 == tipo_de_letra( 'C'));
	assert( 3 == tipo_de_letra( 'e'));
	assert( 3 == tipo_de_letra( 'E'));
	assert( 0 == tipo_de_letra( '7'));
	assert( 0 == tipo_de_letra( 'u'));
	printf("--->ok\n");
	printf("--->test 1 superado\n\n");
	return 0;
}

static int test2(void)
{
	char cadena[30] = "cadenadeprueba";

	printf("--->prueba 1.4\n");
	assert( 3 == primera_letra( cadena, 'e'));
	assert( 1 == primera_letra( cadena, 'a'));
	assert( -1 == primera_letra( cadena, 'z'));
	printf("--->ok\n");
	printf("--->prueba 1.6\n");
	assert( 50 == suma_numeros( 20, 30));
	assert( 2 == suma_numeros( 5, -3));
	assert( 9 == suma_numeros( -9, 18));
	assert( -10 == suma_numeros( -5, -5));
	printf("--->ok\n");
	printf("--->test 2 superado\n\n");
	return 0;
}

static int test3(void)
{
	printf("--->prueba 1.7\n");
	assert( 10 == resta_numeros( 30, 20));
	assert( 8 == resta_numeros( 5, -3));
	assert( -27 == resta_numeros( -9, 18));
	assert( 0 == resta_numeros( -5, -5));
	printf("--->ok\n");
	printf("--->prueba 1.8\n");
	assert( 20 == multiplica_numeros( -10, -2));
	assert( 15 == multiplica_numeros( 5, 3));
	assert( -15 == multiplica_numeros( 5, -3));
	printf("--->ok\n");
	printf("--->test 3 superado\n\n");
	return 0;
}

void main(void)
{
	char cadenaorigen[30] = "pruebasustitucion";
	int numerocambios;
	test1();
	test2();
	test3();

	printf("--->prueba 1.5\n\n");
	printf("Cadena origen = %s y letra a sustituir 'u'\n",cadenaorigen);
	numerocambios = cambia_letras( cadenaorigen, 'u', 'z');
	assert( 3 == numerocambios);
	printf("Cadena resultante = %s, con %d letras cambiadas\n\n",
		cadenaorigen, numerocambios);
	printf("Cadena origen = %s y letra a sustituir 'd'\n",cadenaorigen);
	numerocambios = cambia_letras( cadenaorigen, 'd', 'z');
	assert( 0 == numerocambios);
	printf("Cadena resultante = %s, con %d letras cambiadas\n",
		cadenaorigen, numerocambios);
	printf("--->ok\n");
	printf("--->todos los test superdados\n\n");
}
