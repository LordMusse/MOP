//memory allocation
#define SRAM_START  (0x20000000)
#define SRAM_END    (0x3FFFFFFF)
#define SRAM_SIZE   ((SRAM_END)-(SRAM_START))

#define APPLICATION_SRAM_START  (0x20000000)
#define APPLICATION_SRAM_END    (0x2001BFFF)

#define VECTORS_START   ((APPLICATION_SRAM_END)+1)
#define VECTORS_END     (0x2001C3FF)

#define STACK_START ((VECTORS_END)+1)
#define STACK_END   (0x2001FFFF)

#define PERIPHERALS_START   ((SRAM_END)+1)
#define PERIPHERALS_END     (0x5FFFFFFF)

#define EXTERNAL_RAM_START  ((PERIPHERALS_END)+1)
#define EXTERNAL_RAM_END    (0x9FFFFFFF)

#define EXTERNAL_DEVICES_START  ((EXTERNAL_RAM_END)+1)
#define EXTERNAL_DEVICES_END    (0xDFFFFFFF)

#define PERIPHERAL_BUSS_START   ((EXTERNAL_DEVICES_END)+1)
#define PERIPHERAL_BUSS_END     (0xE00FFFFF)

#define SPECIFICS_START         ((PERIPHERAL_BUSS_END)+1)
#define SPECIFICS_END           (0xFFFFFFFF)

//PORTS
#define GPIO_PORT_SIZE (0x400)

#define GPIOA_START  (0x40020000)
#define GPIOA_END    ((GPIOA_START)+(GPIO_PORT_SIZE)-1)

#define GPIOB_START  ((GPIOA_END)+1)
#define GPIOB_END    ((GPIOB_START)+(GPIO_PORT_SIZE)-1)

#define GPIOC_START  ((GPIOB_END)+1)
#define GPIOC_END    ((GPIOC_START)+(GPIO_PORT_SIZE)-1)

#define GPIOD_START  ((GPIOC_END)+1)
#define GPIOD_END    ((GPIOD_START)+(GPIO_PORT_SIZE)-1)

#define GPIOE_START  ((GPIOD_END)+1)
#define GPIOE_END    ((GPIOE_START)+(GPIO_PORT_SIZE)-1)

#define GPIOF_START  ((GPIOE_END)+1)
#define GPIOF_END    ((GPIOF_START)+(GPIO_PORT_SIZE)-1)

#define GPIOG_START  ((GPIOF_END)+1)
#define GPIOG_END    ((GPIOG_START)+(GPIO_PORT_SIZE)-1)

#define GPIOH_START  ((GPIOG_END)+1)
#define GPIOH_END    ((GPIOH_START)+(GPIO_PORT_SIZE)-1)

#define GPIOI_START  ((GPIOH_END)+1)
#define GPIOI_END    ((GPIOI_START)+(GPIO_PORT_SIZE)-1)

#define GPIOJ_START  ((GPIOI_END)+1)
#define GPIOJ_END    ((GPIOJ_START)+(GPIO_PORT_SIZE)-1)

#define GPIOK_START  ((GPIOJ_END)+1)
#define GPIOK_END    ((GPIOK_START)+(GPIO_PORT_SIZE)-1)

#define CRC_START  ((GPIOK_END)+(GPIO_PORT_SIZE)+1)
#define CRC_END    ((CRC_START)+(GPIO_PORT_SIZE)-1)

#define RCC_START  ((CRC_END)+(GPIO_PORT_SIZE)+1)
#define RCC_END    ((RCC_START)+(GPIO_PORT_SIZE)-1)

#define Flash_interface_START  ((RCC_END)+1)
#define Flash_interface_END    ((Flash_interface_START)+(GPIO_PORT_SIZE)-1)

//Input/Output
typedef volatile struct {
unsigned int 		moder;
unsigned short int	otyper;   
unsigned short int 	reserved0; 
unsigned int        	ospeedr;  
unsigned int        	pupdr; 
unsigned char       	idr_low;
unsigned char       	idr_high;
unsigned short int  	Reserved1;
unsigned char       	odr_low;
unsigned char       	odr_high;
unsigned short int  	reserved2;
unsigned int        	bsrr;     
unsigned short int  	lckr; 
unsigned short      	reserved3;
unsigned int        	afrl; 
unsigned int        	afrh;
} GPIO, *PGPIO;

#define GPIO_D (*((volatile PGPIO) GPIOD_START))
#define GPIO_E (*((volatile PGPIO) GPIOE_START))

//Controls
#define STK_CTRL ((volatile unsigned int *)(0xE000E010))  
#define STK_LOAD ((volatile unsigned int *)(0xE000E014))  
#define STK_VAL  ((volatile unsigned int *)(0xE000E018)) 

#define B_E 0x40
#define B_SELECT 0x4
#define B_RW 0x2
#define B_RS 0x1

//Typedefs
typedef char int8;
typedef short int int16;
typedef long int int32;
typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef unsigned long int uint32;
//in linking
extern unsigned int _etext;
extern unsigned int _sdata;
extern unsigned int _edata;
extern unsigned int _la_data;

extern unsigned int _sbss;
extern unsigned int _ebss;

/* function prototypes of STM32F407x system exception and IRQ handlers */

void Reset_Handler(void);

void NMI_Handler 					(void);
void HardFault_Handler 				(void);
void MemManage_Handler 				(void);
void BusFault_Handler 				(void);
void UsageFault_Handler 			(void);
void SVC_Handler 					(void);
void DebugMon_Handler 				(void);
void PendSV_Handler   				(void);
void SysTick_Handler  				(void);
void WWDG_IRQHandler 				(void);
void PVD_IRQHandler 				(void);             
void TAMP_STAMP_IRQHandler 			(void);      
void RTC_WKUP_IRQHandler 			(void);                               
void FLASH_G_IRQ		 			(void);                               
void RCC_IRQHandler 				(void);             
void EXTI0_IRQHandler 				(void);           
void EXTI1_IRQHandler 				(void);           
void EXTI2_IRQHandler 				(void);           
void EXTI3_IRQHandler 				(void);           
void EXTI4_IRQHandler 				(void);           
void DMA1_Stream0_IRQHandler 		(void);    
void DMA1_Stream1_IRQHandler 		(void);    
void DMA1_Stream2_IRQHandler 		(void);    
void DMA1_Stream3_IRQHandler 		(void);    
void DMA1_Stream4_IRQHandler 		(void);    
void DMA1_Stream5_IRQHandler 		(void);    
void DMA1_Stream6_IRQHandler 		(void);    
void ADC_IRQHandler 				(void);             
void CAN1_TX_IRQHandler 			(void);         
void CAN1_RX0_IRQHandler 			(void);        
void CAN1_RX1_IRQHandler 			(void);        
void CAN1_SCE_IRQHandler 			(void);        
void EXTI9_5_IRQHandler 			(void);         
void TIM1_BRK_TIM9_IRQHandler 		(void);   
void TIM1_UP_TIM10_IRQHandler 		(void);   
void TIM1_TRG_COM_TIM11_IRQHandler 	(void);
void TIM1_CC_IRQHandler 			(void);         
void TIM2_IRQHandler 				(void);            
void TIM3_IRQHandler 				(void);            
void TIM4_IRQHandler 				(void);            
void I2C1_EV_IRQHandler 			(void);         
void I2C1_ER_IRQHandler 			(void);         
void I2C2_EV_IRQHandler 			(void);         
void I2C2_ER_IRQHandler 			(void);         
void SPI1_IRQHandler  				(void);           
void SPI2_IRQHandler 				(void);            
void USART1_IRQHandler  			(void);         
void USART2_IRQHandler  			(void);        
void USART3_IRQHandler   			(void);        
void EXTI15_10_IRQHandler   		(void);     
void RTC_Alarm_IRQHandler    		(void);    
void OTG_FS_WKUP_IRQHandler     	(void); 
void TIM8_BRK_TIM12_IRQHandler   	(void);
void TIM8_UP_TIM13_IRQHandler    	(void);
void TIM8_TRG_COM_TIM14_IRQHandler 	(void);
void TIM8_CC_IRQHandler          	(void);
void DMA1_Stream7_IRQHandler     	(void);
void FSMC_IRQHandler             	(void);
void SDIO_IRQHandler             	(void);
void TIM5_IRQHandler             	(void);
void SPI3_IRQHandler             	(void);
void UART4_IRQHandler            	(void);
void UART5_IRQHandler            	(void);
void TIM6_DAC_IRQHandler         	(void);
void TIM7_IRQHandler             	(void);
void DMA2_Stream0_IRQHandler     	(void);
void DMA2_Stream1_IRQHandler     	(void);
void DMA2_Stream2_IRQHandler     	(void);
void DMA2_Stream3_IRQHandler     	(void);
void DMA2_Stream4_IRQHandler     	(void);
void ETH_IRQHandler              	(void);
void ETH_WKUP_IRQHandler         	(void);
void CAN2_TX_IRQHandler          	(void);
void CAN2_RX0_IRQHandler         	(void);
void CAN2_RX1_IRQHandler         	(void);
void CAN2_SCE_IRQHandler         	(void);
void OTG_FS_IRQHandler           	(void);
void DMA2_Stream5_IRQHandler     	(void);
void DMA2_Stream6_IRQHandler     	(void);
void DMA2_Stream7_IRQHandler     	(void);
void USART6_IRQHandler           	(void);
void I2C3_EV_IRQHandler          	(void);
void I2C3_ER_IRQHandler          	(void);
void OTG_HS_EP1_OUT_IRQHandler   	(void);
void OTG_HS_EP1_IN_IRQHandler    	(void);
void OTG_HS_WKUP_IRQHandler      	(void);
void OTG_HS_IRQHandler           	(void);
void DCMI_IRQHandler             	(void);
void CRYP_IRQHandler             	(void);
void HASH_RNG_IRQHandler         	(void);
void FPU_IRQHandler              	(void);                          

//weird-ass defines don't know what they do, some examiner did this, so do I

#ifndef MAIN_H_
#define MAIN_H_

#define MAX_TASKS   5

#define INTERRUPT_DISABLE()  do{__asm volatile ("MOV R0,#0x1"); asm volatile("MSR PRIMASK,R0"); } while(0)

#define INTERRUPT_ENABLE()  do{__asm volatile ("MOV R0,#0x0"); asm volatile("MSR PRIMASK,R0"); } while(0)

#endif /* MAIN_H_ */

//prototypes of functions

int main(void);

void Default_Handler(void);

void startup (void);

void app_init(void);

//keypad
uint8 keyb (void);

//7 segment display
void output_7_segment (uint8 output);

/*Delay-functions*/
void delay_250ns (void);

void delay_micro (uint32 us);

void delay_milli (uint32 ms);

/*Ascii-display functions*/

//to initialize the ascii-screen
void ascii_init (void);
        
//To "move" to a place you want to write or read from               
void ascii_goto_coordinate (uint8 row,uint8 column);
  
/* These are to write charachter and commands */
void ascii_write_character (uint8 character); 
        
void ascii_write_command (uint8 command);   
