/*=================================================================================*/
/*  File        : main.c                                                           */
/*  Description : This Program file  For CALCULATOR Application                    */
/*  Author      : Tarek Ahmed Abd El Wahab. Embedded SW Engineer                   */
/*  Date        : 15/11/2023                                                       */
/*  Linkedin    : https://www.linkedin.com/in/tarek-el-shafei-647698205/           */
/*  Git account : https://github.com/Tarek1482000?tab=repositories                 */
/*  mail        : tarekahmed0128@gmil.com                                          */
/*=================================================================================*/

#include "HAL/SYSTEM/SYSTYM_Interface.h"
#include "HAL/LCD/LCD_interface.h"
#include "HAL/KEYPAD/KEYPAD_interface.h"
#include "HAL/CALCULATOR/CALCULATOR_interface.h"
int main(void)
{
	SYSTEM_Init();

	LCD_init();

	Caculator_Init();

	for(;;)
	{
		Caculator_Start();
	}
}
