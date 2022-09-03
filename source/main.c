/** @file main.c
**
** \brief Brief description of the file

** | RV | YYYY.MM.DD | Autor       | Descripción de los cambios              |
** |----|------------|-------------|-----------------------------------------|
** |  1 | 2022.08.27 | fedeiz      | Version inicial del archivo             |
**
** 
**


/* === Headers files inclusions =============================================================== */

#include "alumno.h"
#include <stdio.h>
#include "alumno.h"

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================= */
//! This function define an alumno struct and shows his properties
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
/* === End of documentation ==================================================================== */

