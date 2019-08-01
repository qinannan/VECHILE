#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"

#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line)
{
    while(1);
}
#endif

//*****************************************************************************
//
// Open the on-board LED_R.
//
//*****************************************************************************
int
main(void)
{
    //
    // Enable the GPIO port that is used for the on-board LED_R.
    //
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);

    //
    // Check if the peripheral access is enabled.
    //
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF))
    {
    }

    //
    // Enable the GPIO pin for the LED (PF1).  Set the direction as output, and
    // enable the GPIO pin for digital function.
    //
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1);

    // Open The LED_R
    GPIOPinWrite(GPIO_PORTF_BASE,GPIO_PIN_1,GPIO_PIN_1);
    //
    // Loop forever.
    //
    while(1)
    {

    }
}
