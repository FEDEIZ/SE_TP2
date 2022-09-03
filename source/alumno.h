#ifndef ALUMNO_H /*! @cond    */
#define ALUMNO_H   /*! @endcond */


/** @file alumno.h
 ** \brief Header module with alumno functions
 **
 ** | RV | YYYY.MM.DD | Author      | Changes description              |
 ** |----|------------|-------------|----------------------------------|
 ** |  1 | 2022.08.27 | fedeiz      | V1.0                             |
 ** 
 **
 

/* === Headers files inclusions ================================================================ */

/* === Cabecera C++ ============================================================================ */

#ifdef __cplusplus
extern "C" {
#endif

/* === Public macros definitions =============================================================== */
 
/* === Public data type declarations =========================================================== */
//! structure that contain the alumno's info
 typedef const struct alumno_s {
    char apellido[64]; //!< Characters chain with the alumno's lastname
    char nombre[64];    //!< Characters chain with the alumno's name
    char documento[16]; //!< Characters chain with the alumno's DNI
} * alumno_p;
/* === Public variable declarations ============================================================ */

/* === Public function declarations ============================================================ */
void nombre(const alumno_p alumno);
/* === End of documentation ==================================================================== */

#ifdef __cplusplus
}
#endif



#endif   /* ALUMNO_H */