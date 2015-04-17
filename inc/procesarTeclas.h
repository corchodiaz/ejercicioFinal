
/* IMPORTANTE: Este es un archivo para lectura de teclado utilizado
 * para hacer pruebas rápidas, dado que no resuelve de manera eficiente
 * el manejo de los rebotes.
 */


#ifndef PROCESARTECLAS_H
#define PROCESARTECLAS_H
/** \brief Short description of this file
 **
 ** Long description of this file
 **
 **/

/** \addtogroup CIAA_Firmware CIAA Firmware
 ** @{ */
/** \addtogroup Template Template to start a new module
 ** @{ */

/*
 * Initials     Name
 * ---------------------------
 *
 */

/*
 * modification history (new versions first)
 * -----------------------------------------------------------
 * yyyymmdd v0.0.1 initials initial version
 */

/*==================[inclusions]=============================================*/

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/

/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/
uint8_t tiltLed;
uint16_t tiltPer;
uint8_t teclas;


/*==================[external functions declaration]=========================*/

// Procesamiento de Teclas
extern void procesarTeclas(teclas);

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
}
#endif
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif /* #ifndef TECLADO_H */

