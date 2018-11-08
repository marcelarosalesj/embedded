/****************************************************************************************************/
/**
\file       dac.h
\brief      MCAL abstraction level - Digital to Analog Converter Controller configuration and interrupt handling.
\author     Abraham Tezmol
\version    1.0
\project    Tau 
\date       26/September/2016
*/
/****************************************************************************************************/

#ifndef __DAC_H        /*prevent duplicated includes*/
#define __DAC_H

/*****************************************************************************************************
* Include files
*****************************************************************************************************/

/** Core modules */
#include "compiler.h"
#include "Std_Types.h"

/*****************************************************************************************************
* Declaration of module wide TYPEs 
*****************************************************************************************************/


/*****************************************************************************************************
* Definition of module wide MACROs / #DEFINE-CONSTANTs 
*****************************************************************************************************/


/*****************************************************************************************************
* Declaration of module wide FUNCTIONS
*****************************************************************************************************/

/** DAC Initialization function */
void dac_initialization(void);

/****************************************************************************************************/

#endif /* __DAC_H */
