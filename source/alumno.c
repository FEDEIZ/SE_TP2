/** @file alumno.c
 **
 ** @brief Codigo fuente de las funciones de alumno
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

#include "alumno.h"
#include <stdio.h>
/* === Definicion y Macros privados ======================================== */

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/* === Definiciones de funciones privadas ================================== */

/* === Definiciones de funciones publicas ================================== */

void nombre(const alumno_p alumno){
    printf("Apellido del alumno: %s\r\n", alumno->apellido);
    printf("Nombre del alumno: %s\r\n", alumno->nombre);
    printf("Documento del alumno: %s\r\n", alumno->documento);
}

/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */

