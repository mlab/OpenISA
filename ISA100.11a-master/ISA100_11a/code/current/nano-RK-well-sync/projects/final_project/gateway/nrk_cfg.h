/***************************************************************
*                            NanoRK CONFIG                     *
***************************************************************/

#ifndef __nrk_cfg_h	
#define __nrk_cfg_h

// NRK_REPORT_ERRORS will cause the kernel to print out information about
// missed deadlines or reserve violations
#define NRK_REPORT_ERRORS
// NRK_HALT_ON_ERRORS will cause the kernel to freeze on errors so that
// it is easier to see debugging messages.
#define NRK_HALT_ON_ERROR

// NRK_STACK_CHECK adds a little check to see if the bottom of the stack
// has been over written on all suspend calls
#define NRK_STACK_CHECK

// Leave NRK_NO_POWER_DOWN define in if the target can not wake up from sleep 
// because it has no asynchronously clocked
#define NRK_NO_POWER_DOWN

// This must be greater than or equal to the highest priority task that uses
// the serial port (i.e. print of nrk_kprintf)
#define SLIP_PCP_CEILING                18  

#define NRK_MAX_TASKS       		5
// Max number of tasks in your application

// We have at most NRK_DRIVER_CNT drivers to register
#define NRK_MAX_DRIVER_CNT              1    

// Radio can interact with battery voltage monitoring
#define RADIO_PRIORITY_CEILING          20

#define NRK_MAX_RESOURCE_CNT           5
                           

#define NRK_TASK_IDLE_STK_SIZE         128  
#define NRK_APP_STACKSIZE              128
#define NRK_KERNEL_STACKSIZE           128 

// Enable buffered and signal controlled serial RX
#define NRK_UART_BUF 1

// Set the size of the kernel serial buffer
#define MAX_RX_UART_BUF 128


#endif
