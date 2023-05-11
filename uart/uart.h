#ifndef UART_H_
#define UART_H_


#include <avr/io.h>







//#include <util/delay.h>

void uart_init(void);
void uart_tx(unsigned char data);
unsigned char uart_rx(void);
void uart_write_string( char *n );

#endif /* UART_H_ */