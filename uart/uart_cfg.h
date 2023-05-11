
#ifndef UART_CFG_H_
#define UART_CFG_H_

#define  F_CPU 12000000UL
#define  baud 9600


#define NONE	0
#define ODD		3
#define EVEN	2


#define PARITY	NONE

#define Asynchronous	0
#define Synchronous		1

#define Mode_Select		Asynchronous


#define Data_5_bit		0
#define Data_6_bit		1
#define Data_7_bit		2
#define Data_8_bit		3
#define Data_9_bit		7




#define DATA_FRAME		Data_8_bit


const unsigned char STOP_BITS	= 0;				// 0 = 1 bit			1 = 2 bit

#define  baudrate ((F_CPU)/(baud*16UL)-1)





#endif /* UART_CFG_H_ */