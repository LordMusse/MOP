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

int32 vectors[] __attribute__((section(".isr_vector")))   = {
	STACK_START,
	(int32)Reset_Handler,
	(int32)NMI_Handler,
	(int32)HardFault_Handler,
	(int32)MemManage_Handler,
	(int32)BusFault_Handler,
	(int32)UsageFault_Handler,
	0,
	0,
	0,
	0,
	(int32)SVC_Handler,
	(int32)DebugMon_Handler,
	0,
	(int32)PendSV_Handler,
	(int32)SysTick_Handler,
	(int32)WWDG_IRQHandler,
	(int32)PVD_IRQHandler,         
	(int32)TAMP_STAMP_IRQHandler,  
	(int32)RTC_WKUP_IRQHandler,    
	(int32)FLASH_G_IRQ,                      
	(int32)RCC_IRQHandler,         
	(int32)EXTI0_IRQHandler,       
	(int32)EXTI1_IRQHandler,       
	(int32)EXTI2_IRQHandler,       
	(int32)EXTI3_IRQHandler,       
	(int32)EXTI4_IRQHandler,       
	(int32)DMA1_Stream0_IRQHandler,
	(int32)DMA1_Stream1_IRQHandler,
	(int32)DMA1_Stream2_IRQHandler,
	(int32)DMA1_Stream3_IRQHandler,
	(int32)DMA1_Stream4_IRQHandler,
	(int32)DMA1_Stream5_IRQHandler,
	(int32)DMA1_Stream6_IRQHandler,
	(int32)ADC_IRQHandler,         
	(int32)CAN1_TX_IRQHandler,     
	(int32)CAN1_RX0_IRQHandler,    
	(int32)CAN1_RX1_IRQHandler,    
	(int32)CAN1_SCE_IRQHandler,    
	(int32)EXTI9_5_IRQHandler,     
	(int32)TIM1_BRK_TIM9_IRQHandler,
	(int32)TIM1_UP_TIM10_IRQHandler,
	(int32)TIM1_TRG_COM_TIM11_IRQHandler,
	(int32)TIM1_CC_IRQHandler,     
	(int32)TIM2_IRQHandler,        
	(int32)TIM3_IRQHandler,        
	(int32)TIM4_IRQHandler,        
	(int32)I2C1_EV_IRQHandler,     
	(int32)I2C1_ER_IRQHandler,     
	(int32)I2C2_EV_IRQHandler,     
	(int32)I2C2_ER_IRQHandler,     
	(int32)SPI1_IRQHandler,        
	(int32)SPI2_IRQHandler,        
	(int32)USART1_IRQHandler,      
	(int32)USART2_IRQHandler,      
	(int32)USART3_IRQHandler,      
	(int32)EXTI15_10_IRQHandler,   
	(int32)RTC_Alarm_IRQHandler,   
	(int32)OTG_FS_WKUP_IRQHandler, 
	(int32)TIM8_BRK_TIM12_IRQHandler,
	(int32)TIM8_UP_TIM13_IRQHandler,
	(int32)TIM8_TRG_COM_TIM14_IRQHandler,
	(int32)TIM8_CC_IRQHandler,     
	(int32)DMA1_Stream7_IRQHandler,
	(int32)FSMC_IRQHandler,        
	(int32)SDIO_IRQHandler,        
	(int32)TIM5_IRQHandler,        
	(int32)SPI3_IRQHandler,        
	(int32)UART4_IRQHandler,       
	(int32)UART5_IRQHandler,       
	(int32)TIM6_DAC_IRQHandler,    
	(int32)TIM7_IRQHandler,        
	(int32)DMA2_Stream0_IRQHandler,
	(int32)DMA2_Stream1_IRQHandler,
	(int32)DMA2_Stream2_IRQHandler,
	(int32)DMA2_Stream3_IRQHandler,
	(int32)DMA2_Stream4_IRQHandler,
	(int32)ETH_IRQHandler,         
	(int32)ETH_WKUP_IRQHandler,    
	(int32)CAN2_TX_IRQHandler,     
	(int32)CAN2_RX0_IRQHandler,    
	(int32)CAN2_RX1_IRQHandler,    
	(int32)CAN2_SCE_IRQHandler,    
	(int32)OTG_FS_IRQHandler,      
	(int32)DMA2_Stream5_IRQHandler,
	(int32)DMA2_Stream6_IRQHandler,
	(int32)DMA2_Stream7_IRQHandler,
	(int32)USART6_IRQHandler,      
	(int32)I2C3_EV_IRQHandler,     
	(int32)I2C3_ER_IRQHandler,     
	(int32)OTG_HS_EP1_OUT_IRQHandler,
	(int32)OTG_HS_EP1_IN_IRQHandler,
	(int32)OTG_HS_WKUP_IRQHandler, 
	(int32)OTG_HS_IRQHandler,      
	(int32)DCMI_IRQHandler,        
	(int32)CRYP_IRQHandler,        
	(int32)HASH_RNG_IRQHandler,    
	(int32)FPU_IRQHandler,         
};


void Default_Handler(void)
{
	while(1);
};
//stack and stack-guard initialize
uint32 __stack_chk_guard;
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
	//to avoid error in compilator (who thinks stack overflow is dangerous, pfff)
	__stack_chk_guard_setup();

	/* Starta klockor port D och E.
	 * RCC: Reset and Clock Control.
	 * Offset 0x30 är AHB1ENR, peripheral clock register
	 * 0x18=[00010010]*/
	*((uint32 *) RCC_START + 0x30) = 0x18;

	//set read/write-speed of inport to "medium"(01) for each bit
	GPIO_D.ospeedr = 0x55555555;

	//reset the bits we want to use to 0
	GPIO_D.moder &= 0x0000FFFF;
	GPIO_D.otyper &= 0xFF00FFFF;
	GPIO_D.pupdr &= 0x0000FFFF;
	
	//Set mode to write for bit 15-12 and read for bit 11-8
	GPIO_D.moder &= 0x55000000;
	//Set Type for bit 15-8 to Push-Pull
	GPIO_D.otyper &= 0xFFFF00FF;
	//Set PullUp-PullDown-Register for 15-8 to pull down
	GPIO_D.pupdr &= 0xAAAAFFFF;
}
void Reset_Handler (void)
{
	startup();
}
