#include <stdio.h>

#define LONGITUD 10
#define ALTO  	 5
#define ANCHO 	 5

typedef float MapaDePesos[ANCHO][ALTO];

void declaramosVariablesDeTiposPrimitivosAtomicos() {

	/* Tipos de Datos primitivos atómicos */
	int enteroConSigno = -9;
	float decimalDePuntoFlotanteSimplePrecision = 2.3;
	double decimalDePuntoFlotanteDoblePrecision = 44.3;
	char enteroDeLongitudByteSinSigno = 'A' + 1;
}

void declaramosVariablesUsandoModificadores() {
	/*
	 * long
	 * short
	 * signed
	 * unsigned
	 *
	 */
	long int enteroLargoConSigno = 333;
	unsigned long int enteroLargoSinSigno = -1;
	long enteroLargoConSigno2 = 33;
	unsigned enteroSinSigno = 444;
	short int enteroCortoConSigno = 44;
	unsigned short enteroCortoSinSigno = 3;
	signed char byteConSigno = 33;
}

void hacemosSalidaPorPantalla() {

	/* Salida (I/O) */
	printf("Salida %d, %c, %c, %s, %d, %d, %d, %d \n", 1, 64, 'C', "*C*");
}

void probamosElComportamientoDeChar() {

	/* Byte / Entero */
	char letra = 'A';
	printf("letra %c (%d) \n", letra, letra);
	letra = 256 + 65;
	printf("letra %c (%d) \n", letra, letra);
}

void declaramosAlias() {
	/* Definición de alias */
	typedef signed char Byte;
	Byte miByte = 3;
	signed char otroByte = 89;
	miByte = otroByte;
	printf("Bytes %d %d\n", miByte, otroByte);
}

void hacemosEntradaPorTeclado() {
	/* Entrada (I/O) */
	printf("Ingrese un valor: ");
	int numeroIngresado;
	int* punteroANumeroIngresado = &numeroIngresado;
	int resultadoScanf = scanf("%d", punteroANumeroIngresado);
	printf("Ingresaste el valor %d (%d)\n", numeroIngresado, resultadoScanf);
}

void hacemosEntradaMultiplePorTeclado() {
	/* Entrada compuesta (I/O) */
	printf("Ingrese dos valor: ");
	int numero1;
	int numero2;
	int resultadoDelSegundoScanf = scanf("%d y %d", &numero1, &numero2);
	printf("Valores %d %d (%d)\n", numero1, numero2, resultadoDelSegundoScanf);
}

void inicializarValor(float* punteroAlPeso) {

	if (punteroAlPeso != NULL) {

		(*punteroAlPeso) = 0;
	}
}

void inicializarValores(MapaDePesos pesos) {

	int i,j;
	for (i = 0; i < ALTO; i++) {
		for (j = 0; j < ANCHO; j++) {

			pesos[i][j] = 0.0;
		}
	}
}

void mostrarValores(MapaDePesos pesos) {

	int i,j;
	for (i = 0; i < ALTO; i++) {
		for (j = 0; j < ANCHO; j++) {

			printf("pesos[%d][%d] = %f\n", i, j, pesos[i][j]);
		}
	}
}

int main() {

	declaramosVariablesDeTiposPrimitivosAtomicos();
	declaramosVariablesUsandoModificadores();
	hacemosSalidaPorPantalla();
	probamosElComportamientoDeChar();
	declaramosAlias();
//	hacemosEntradaPorTeclado();
//	hacemosEntradaMultiplePorTeclado();

	/* Tipos de Datos Estructurados indexados */
	int edades[LONGITUD];
	edades[0] = 45;
	MapaDePesos pesos;
	pesos[ALTO-1][ANCHO-1] = 56.9;
	inicializarValores(pesos);
	mostrarValores(pesos);

	/* Pasaje de parámetros */
	float peso = 78.9;
	inicializarValor(&peso);
	printf("Peso %f\n", peso);

	float* punteroAOtroPeso = NULL;
	inicializarValor(punteroAOtroPeso);
	punteroAOtroPeso = &peso;
	inicializarValor(punteroAOtroPeso);

	/* Cadenas de caracteres */
	char nombre[] = "Luana";
	printf("Mi nombre es %s\n", nombre);

	int numeros[] = { 1, 2, 3, 4, 5 };
	int n;
	for (n = 0; n < 5; n++) {

		printf("Numeros[%d] = %d\n", n, numeros[n]);
	}

	char otroNombre[30] = "Juan";
	printf("Mi nombre es %s\n", otroNombre);


	int i;
	for (i = 0; i < 6; i++) {
		printf("nombre[%d] = %d -> %c\n", i, nombre[i], nombre[i]);
	}

	char caracteres[] = { 'A' , 'B', 0};
	printf("caracteres %s !\n", caracteres);


	int j;
	for (j = 0; j < 3; j++) {
		char caracterIngresado;
		printf("Ingrese caracter:");
		scanf(" %c", &caracterIngresado);
		printf("Caracter leido %c\n", caracterIngresado);
	}

	/* Tipos de Datos Estructurados asociativos */

	printf("FIN\n");

	return 0;
}
