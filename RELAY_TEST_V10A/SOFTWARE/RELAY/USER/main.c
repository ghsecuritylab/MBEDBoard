//˵��:������RELAY_TEST_V10A�忨��
//����:150s���磬10s�ص�
//by:xxxlzjxxx
//date:2019.04.25

#include "led.h"
#include "delay.h"
#include "sys.h"
#include "timer.h"

u16 count = 0;

int main(void)
 {	
	delay_init();	    	 //��ʱ������ʼ��
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	TIM3_Int_Init(10000,7199);//10Khz�ļ���Ƶ�ʣ�������10000Ϊ1000ms  
   	while(1)
	{
		LED0=!LED0;
		delay_ms(200);		   
	}
}
