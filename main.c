
#include <xc.h>
#include "main.h"
#include "gpio.h"
#include "timer0.h"

void main(void) {
    
    /* Peripheral and System Initialization*/
      
    /* PortA initialization */
    
    
    /* PortB initialization */
    
    
    /* PortC initialization */
    
    
    /* PortD initialization */
    
    
    /* PortE initialization */
    
    
    /* PortF initialization */
    
   
    /* TIMER0 Initialization */
    TIMER0_Initialize();
     
    /* infinite loop */
    while(1)
    {
     switch()   
     {
         case ??:                     
            
            TIMER0_Delay_ms(1000);             /* Delay subroutine */
            
            TIMER0_Delay_ms(1000);             /* Delay subroutine */
            break;
         
         case ??:
            
            TIMER0_Delay_ms(500);             /* Delay subroutine */
            
            TIMER0_Delay_ms(500);             /* Delay subroutine */
            break;
             
         case ??:                     
            
            TIMER0_Delay_ms(100);             /* Delay subroutine */
            
            TIMER0_Delay_ms(100);             /* Delay subroutine */          
            
            TIMER0_Delay_ms(100);             /* Delay subroutine */          
            break;
                         
         default:                       /* No button closed */
            
            break;
     } /* end switch */
        
    } /* end while */
    
    return;
}
