/** @file alumno.c

** \brief source code of alumno functions
 
 ** | RV | YYYY.MM.DD | Author      | Changes description                     |
 ** |----|------------|-------------|-----------------------------------------|
 ** |  1 | 2022.08.27 | fedeiz      | V1.0
 ** 
 **

/* === Headers files inclusions =============================================================== */


#include "alumno.h"
#include <stdio.h>

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================= */
void nombre(const alumno_p alumno){
    printf("Apellido del alumno: %s\r\n", alumno->apellido);
    printf("Nombre del alumno: %s\r\n", alumno->nombre);
    printf("Documento del alumno: %s\r\n", alumno->documento);
}
/* === End of documentation ==================================================================== */
