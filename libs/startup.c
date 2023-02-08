#include "defines.h"

/* function prototypes of STM32F407x system exception and IRQ handlers */

void NMI_Handler 					(void) __attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler 			(void) __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler 					(void) __attribute__ ((weak, alias("Default_Handler")));
void DebugMon_Handler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler   				(void) __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler  				(void) __attribute__ ((weak, alias("Default_Handler")));
void WWDG_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));
void PVD_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));             
void TAMP_STAMP_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));      
void RTC_WKUP_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));                               
void FLASH_G_IRQ		 			(void) __attribute__ ((weak, alias("Default_Handler")));                               
void RCC_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));             
void EXTI0_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void EXTI1_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void EXTI2_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void EXTI3_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void EXTI4_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));           
void DMA1_Stream0_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream1_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream2_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream3_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream4_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream5_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void DMA1_Stream6_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));    
void ADC_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));             
void CAN1_TX_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void CAN1_RX0_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));        
void CAN1_RX1_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));        
void CAN1_SCE_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));        
void EXTI9_5_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void TIM1_BRK_TIM9_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));   
void TIM1_UP_TIM10_IRQHandler 		(void) __attribute__ ((weak, alias("Default_Handler")));   
void TIM1_TRG_COM_TIM11_IRQHandler 	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM1_CC_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void TIM2_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));            
void TIM3_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));            
void TIM4_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));            
void I2C1_EV_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void I2C1_ER_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void I2C2_EV_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void I2C2_ER_IRQHandler 			(void) __attribute__ ((weak, alias("Default_Handler")));         
void SPI1_IRQHandler  				(void) __attribute__ ((weak, alias("Default_Handler")));           
void SPI2_IRQHandler 				(void) __attribute__ ((weak, alias("Default_Handler")));            
void USART1_IRQHandler  			(void) __attribute__ ((weak, alias("Default_Handler")));         
void USART2_IRQHandler  			(void) __attribute__ ((weak, alias("Default_Handler")));        
void USART3_IRQHandler   			(void) __attribute__ ((weak, alias("Default_Handler")));        
void EXTI15_10_IRQHandler   		(void) __attribute__ ((weak, alias("Default_Handler")));     
void RTC_Alarm_IRQHandler    		(void) __attribute__ ((weak, alias("Default_Handler")));    
void OTG_FS_WKUP_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler"))); 
void TIM8_BRK_TIM12_IRQHandler   	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_UP_TIM13_IRQHandler    	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_TRG_COM_TIM14_IRQHandler 	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM8_CC_IRQHandler          	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA1_Stream7_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void FSMC_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void SDIO_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM5_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void SPI3_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void UART4_IRQHandler            	(void) __attribute__ ((weak, alias("Default_Handler")));
void UART5_IRQHandler            	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM6_DAC_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void TIM7_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream0_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream1_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream2_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream3_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream4_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void ETH_IRQHandler              	(void) __attribute__ ((weak, alias("Default_Handler")));
void ETH_WKUP_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_TX_IRQHandler          	(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_RX0_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_RX1_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void CAN2_SCE_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_FS_IRQHandler           	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream5_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream6_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void DMA2_Stream7_IRQHandler     	(void) __attribute__ ((weak, alias("Default_Handler")));
void USART6_IRQHandler           	(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C3_EV_IRQHandler          	(void) __attribute__ ((weak, alias("Default_Handler")));
void I2C3_ER_IRQHandler          	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_EP1_OUT_IRQHandler   	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_EP1_IN_IRQHandler    	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_WKUP_IRQHandler      	(void) __attribute__ ((weak, alias("Default_Handler")));
void OTG_HS_IRQHandler           	(void) __attribute__ ((weak, alias("Default_Handler")));
void DCMI_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void CRYP_IRQHandler             	(void) __attribute__ ((weak, alias("Default_Handler")));
void HASH_RNG_IRQHandler         	(void) __attribute__ ((weak, alias("Default_Handler")));
void FPU_IRQHandler              	(void) __attribute__ ((weak, alias("Default_Handler")));                          

int vectors[] __attribute__((section(".isr_vector")))   = {
	STACK_START,
	(int)Reset_Handler,
	(int)NMI_Handler,
	(int)HardFault_Handler,
	(int)MemManage_Handler,
	(int)BusFault_Handler,
	(int)UsageFault_Handler,
	0,
	0,
	0,
	0,
	(int)SVC_Handler,
	(int)DebugMon_Handler,
	0,
	(int)PendSV_Handler,
	(int)SysTick_Handler,
	(int)WWDG_IRQHandler,
	(int)PVD_IRQHandler,         
	(int)TAMP_STAMP_IRQHandler,  
	(int)RTC_WKUP_IRQHandler,    
	(int)FLASH_G_IRQ,                      
	(int)RCC_IRQHandler,         
	(int)EXTI0_IRQHandler,       
	(int)EXTI1_IRQHandler,       
	(int)EXTI2_IRQHandler,       
	(int)EXTI3_IRQHandler,       
	(int)EXTI4_IRQHandler,       
	(int)DMA1_Stream0_IRQHandler,
	(int)DMA1_Stream1_IRQHandler,
	(int)DMA1_Stream2_IRQHandler,
	(int)DMA1_Stream3_IRQHandler,
	(int)DMA1_Stream4_IRQHandler,
	(int)DMA1_Stream5_IRQHandler,
	(int)DMA1_Stream6_IRQHandler,
	(int)ADC_IRQHandler,         
	(int)CAN1_TX_IRQHandler,     
	(int)CAN1_RX0_IRQHandler,    
	(int)CAN1_RX1_IRQHandler,    
	(int)CAN1_SCE_IRQHandler,    
	(int)EXTI9_5_IRQHandler,     
	(int)TIM1_BRK_TIM9_IRQHandler,
	(int)TIM1_UP_TIM10_IRQHandler,
	(int)TIM1_TRG_COM_TIM11_IRQHandler,
	(int)TIM1_CC_IRQHandler,     
	(int)TIM2_IRQHandler,        
	(int)TIM3_IRQHandler,        
	(int)TIM4_IRQHandler,        
	(int)I2C1_EV_IRQHandler,     
	(int)I2C1_ER_IRQHandler,     
	(int)I2C2_EV_IRQHandler,     
	(int)I2C2_ER_IRQHandler,     
	(int)SPI1_IRQHandler,        
	(int)SPI2_IRQHandler,        
	(int)USART1_IRQHandler,      
	(int)USART2_IRQHandler,      
	(int)USART3_IRQHandler,      
	(int)EXTI15_10_IRQHandler,   
	(int)RTC_Alarm_IRQHandler,   
	(int)OTG_FS_WKUP_IRQHandler, 
	(int)TIM8_BRK_TIM12_IRQHandler,
	(int)TIM8_UP_TIM13_IRQHandler,
	(int)TIM8_TRG_COM_TIM14_IRQHandler,
	(int)TIM8_CC_IRQHandler,     
	(int)DMA1_Stream7_IRQHandler,
	(int)FSMC_IRQHandler,        
	(int)SDIO_IRQHandler,        
	(int)TIM5_IRQHandler,        
	(int)SPI3_IRQHandler,        
	(int)UART4_IRQHandler,       
	(int)UART5_IRQHandler,       
	(int)TIM6_DAC_IRQHandler,    
	(int)TIM7_IRQHandler,        
	(int)DMA2_Stream0_IRQHandler,
	(int)DMA2_Stream1_IRQHandler,
	(int)DMA2_Stream2_IRQHandler,
	(int)DMA2_Stream3_IRQHandler,
	(int)DMA2_Stream4_IRQHandler,
	(int)ETH_IRQHandler,         
	(int)ETH_WKUP_IRQHandler,    
	(int)CAN2_TX_IRQHandler,     
	(int)CAN2_RX0_IRQHandler,    
	(int)CAN2_RX1_IRQHandler,    
	(int)CAN2_SCE_IRQHandler,    
	(int)OTG_FS_IRQHandler,      
	(int)DMA2_Stream5_IRQHandler,
	(int)DMA2_Stream6_IRQHandler,
	(int)DMA2_Stream7_IRQHandler,
	(int)USART6_IRQHandler,      
	(int)I2C3_EV_IRQHandler,     
	(int)I2C3_ER_IRQHandler,     
	(int)OTG_HS_EP1_OUT_IRQHandler,
	(int)OTG_HS_EP1_IN_IRQHandler,
	(int)OTG_HS_WKUP_IRQHandler, 
	(int)OTG_HS_IRQHandler,      
	(int)DCMI_IRQHandler,        
	(int)CRYP_IRQHandler,        
	(int)HASH_RNG_IRQHandler,    
	(int)FPU_IRQHandler,         
};


void Default_Handler(void)
{
	while(1);
};
//stack and stack-guard initialize
unsigned long __stack_chk_guard;
void __stack_chk_guard_setup(void)
{
     __stack_chk_guard = 0xBAAAAAAD;//provide some magic numbers
}

void __stack_chk_fail(void)                         
{
 /* Error message */                                 
}// will be called when guard variable is corrupted 
__attribute__((naked))
__attribute__((section(".start_section")))
void startup (void)
{
	__asm volatile(" LDR R0,=0x2001C000\n");
	__asm volatile(" MOV SP, R0\n");
	__asm volatile(" BL main \n");
	__asm volatile(" B .\n");
}

void app_init(void)
{
	__stack_chk_guard_setup();

	//reset the bits we want to use to 0
	* ( (unsigned long *) GPIOD_START) &= 0x0000FFFF;
	* ( (unsigned long *) GPIOD_START + 0x4) &= 0xFF00FFFF;
	* ( (unsigned long *) GPIOD_START + 0x8) &= 0x0000FFFF;
	
	//Set mode to write for bit 15-12 and read for bit 11-8
	* ( (unsigned long *) GPIOD_START) &= 0x55000000;
	//Set Type for bit 15-8 to Push-Pull
	* ( (unsigned long *) GPIOD_START + 0x4) &= 0xFFFF00FF;
	//Set PullUp-PullDown-Register for 15-8 to pull down
	* ( (unsigned long *) GPIOD_START + 0x8) &= 0xAAAAFFFF;
}
void Reset_Handler (void)
{
	startup();
}
