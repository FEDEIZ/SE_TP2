/** @file main.c
 **
 ** @brief Programa principal del TP2
 **
 ** 
 ** | RV | YYYY.MM.DD | Autor       | Descripción de los cambios              |
 ** |----|------------|-------------|-----------------------------------------|
 ** |  1 | 2022.08.27 | fedeiz      | Version inicial del archivo             |
 ** 
 ** @defgroup plantilla Plantilals de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de cabeceras ============================================ */
#include "main.h"
#include <stdio.h>
#include "alumno.h"

/* === Definicion y Macros privados ======================================== */

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/* === Definiciones de funciones privadas ================================== */

/* === Definiciones de funciones publicas ================================== */

int main(void) {

	static const struct alumno_s alumno = {
		.apellido = "INTERLANDI ZOIREFF",
		.nombre = "Federico",
		.documento = "36.550.842"
	};

	printf("Empieza el programa principal\r\n");
	nombre(&alumno);
	printf("Termina el programa principal\r\n");
	return 0;
}

/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */



