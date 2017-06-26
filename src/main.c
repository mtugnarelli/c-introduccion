#include <stdio.h>

#define LONGITUD 10
#define ALTO  	 5
#define ANCHO 	 5

#define PEDIR_ENTRADA 0

typedef float MapaDePesos[ANCHO][ALTO];

typedef struct {
	int numero;
	char nombre[200];
	float promedio;
} Alumno;

void declaramosVariablesDeTiposPrimitivosAtomicos() {

	/* Tipos de Datos primitivos atómicos */
	int enteroConSigno = -9;
	float decimalDePuntoFlotanteSimplePrecision = 2.3;
	double decimalDePuntoFlotanteDoblePrecision = 44.3;
	char enteroDeLongitudByteSinSigno = 'A' + 1;

	enteroConSigno++;
	decimalDePuntoFlotanteSimplePrecision += 3.0;
	decimalDePuntoFlotanteDoblePrecision *= 60.9;
	enteroDeLongitudByteSinSigno--;
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
	unsigned long int enteroLargoSinSigno = 1;
	long enteroLargoConSigno2 = 33;
	unsigned enteroSinSigno = 444;
	short int enteroCortoConSigno = 44;
	unsigned short enteroCortoSinSigno = 3;
	signed char byteConSigno = 33;

	++enteroLargoConSigno;
	enteroLargoSinSigno++;
	--enteroLargoConSigno;
	enteroLargoConSigno2--;
	enteroSinSigno = -1;
	enteroSinSigno++;
	enteroCortoConSigno %= 2;
	enteroCortoSinSigno /= 5;
	byteConSigno++;
}

void hacemosSalidaPorPantalla() {

	/* Salida (I/O) */
	printf("Salida %d, %c, %c, %s \n", 1, 64, 'C', "*C*");
}

void probamosElComportamientoDeChar() {

	/* Byte / Entero */
	char letra = 'A';
	printf("letra %c (%d) \n", letra, letra);
	letra = (char) (256 + 65);
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

	if (PEDIR_ENTRADA) {

		/* Entrada (I/O) */
		printf("Ingrese un valor: ");
		int numeroIngresado;
		int* punteroANumeroIngresado = &numeroIngresado;
		int resultadoScanf = scanf("%d", punteroANumeroIngresado);
		printf("Ingresaste el valor %d (%d)\n", numeroIngresado, resultadoScanf);
	}
}

void hacemosEntradaMultiplePorTeclado() {

	if (PEDIR_ENTRADA) {

		/* Entrada compuesta (I/O) */
		printf("Ingrese dos valor: ");
		int numero1;
		int numero2;
		int resultadoDelSegundoScanf = scanf("%d y %d", &numero1, &numero2);
		printf("Valores %d %d (%d)\n", numero1, numero2, resultadoDelSegundoScanf);
	}
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

void declaramosYUsamosArraysEstaticos() {
	//	hacemosEntradaPorTeclado();
	//	hacemosEntradaMultiplePorTeclado();
	/* Tipos de Datos Estructurados indexados */
	int edades[LONGITUD];
	edades[0] = 45;
	edades[LONGITUD - 1] = edades[0];
	MapaDePesos pesos;
	pesos[ALTO - 1][ANCHO - 1] = 56.9;
	inicializarValores(pesos);
	mostrarValores(pesos);
}

void pasajeDeParametros() {
	/* Pasaje de parámetros */
	float peso = 78.9;
	inicializarValor(&peso);
	printf("Peso %f\n", peso);
	float* punteroAOtroPeso = NULL;
	inicializarValor(punteroAOtroPeso);
	punteroAOtroPeso = &peso;
	inicializarValor(punteroAOtroPeso);
}

void usamosStringsEnC() {
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
	char caracteres[] = { 'A', 'B', 0 };
	printf("caracteres %s !\n", caracteres);
}

void hacemosEntradaPorTecladoDeCaracteres() {
	int j;
	for (j = 0; j < 3; j++) {
		char caracterIngresado;
		printf("Ingrese caracter:");
		/* Agregamos un espacio antes del %c para ignorar saltos de línea y
		 * cualquier caracter no imprimible */
		scanf(" %c", &caracterIngresado);
		printf("Caracter leido %c\n", caracterIngresado);
	}
}

void confundimosComparacionConAsignacion() {
	int valor;
	printf("Adiviná el número mágico ");
	scanf("%d", &valor);

	/* Así no */
	// if (valor = 7) {

	/* Así sí */
	if (valor == 7) {
		printf("Ganaste !!!!\n");
	}
}

void hacemosAsignacionesMultiples() {
	/* Asignación múltiple */
	int valor1, valor2, valor3;
	valor1 = valor2 = valor3 = 89;
}


void copiarString(char* desde, char* hasta) {
	int c = 0;
	do {
		hasta[c] = desde[c];
	} while (desde[c++] != 0);
}

void cargarDatosDelAlumno(Alumno* alumno) {

	copiarString("Maria", alumno->nombre);
	alumno->numero = 8;
	(*alumno).promedio = 7.9;
}

void asignamosStrings() {
	char nombreInicializado[50] = "Pedro";
	char nombreNoInicializado[50];
	nombreNoInicializado[0] = 'C';
	nombreNoInicializado[1] = 'a';
	nombreNoInicializado[2] = 'r';
	nombreNoInicializado[3] = 'l';
	nombreNoInicializado[4] = 'a';
	nombreNoInicializado[5] = 0;
	char referencia[] = "Carla";
	copiarString(nombreNoInicializado, referencia);
}

void declaramosYUsamosStructs(int numero, char nombre[200], float promedio) {

	// Asociativos
	Alumno unAlumno = {
			numero = 9,
			nombre = "Carlos",
			promedio = 7.8
	};

	Alumno otroAlumno = {
			8,
			"Juan",
			5.9
	};

	printf("Alumno %d %s %f\n",
			unAlumno.numero, unAlumno.nombre, unAlumno.promedio);
	printf("Alumno %d %s %f\n",
			otroAlumno.numero, otroAlumno.nombre, otroAlumno.promedio);

	Alumno alumnoCompletado;
	alumnoCompletado.numero = 7;
	copiarString("Lucia", alumnoCompletado.nombre);
	alumnoCompletado.promedio = 9.6;

	printf("Alumno %d %s %f\n",
			alumnoCompletado.numero, alumnoCompletado.nombre, alumnoCompletado.promedio);

	Alumno alumnoCargado;
	cargarDatosDelAlumno(&alumnoCargado);

	printf("Alumno %d %s %f\n",
			alumnoCargado.numero, alumnoCargado.nombre, alumnoCargado.promedio);
}

int main() {

	declaramosVariablesDeTiposPrimitivosAtomicos();
	declaramosVariablesUsandoModificadores();
	hacemosSalidaPorPantalla();
	probamosElComportamientoDeChar();
	declaramosAlias();
	hacemosEntradaPorTeclado();
	hacemosEntradaMultiplePorTeclado();

	/* Tipos de Datos Estructurados */

	// Indexados
	declaramosYUsamosArraysEstaticos();
	pasajeDeParametros();
	usamosStringsEnC();
	hacemosEntradaPorTecladoDeCaracteres();

	confundimosComparacionConAsignacion();
	hacemosAsignacionesMultiples();

	asignamosStrings();

	// Asociativos
	declaramosYUsamosStructs();


	printf("FIN\n");

	return 0;
}
