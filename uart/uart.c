#include "uart.h"
#include "uart_cfg.h"
extern const unsigned char STOP_BITS;
void uart_init(void)
{
	UBRRH  = (baudrate>>8);
	UBRRL  = baudrate ;
	UCSRB |= (1<<TXEN)|(1<<RXEN);
	UCSRC |= (1<<URSEL)|(Data_8_bit<<1) | (PARITY<<4) | (STOP_BITS<<3) | (Mode_Select<<6);
}

void uart_tx(unsigned char data)
{
	while(!( UCSRA & (1<<UDRE)));	/* Wait for empty transmit buffer */
	UDR = data;						/* Put data into buffer, sends the data */
}

unsigned char uart_rx(void)
{
	while (! ((UCSRA) & (1<<RXC)));
	return UDR ;
}
void uart_write_string( char *n )
{
	int x;
	for (x=0;n[x]!='\0';x++)
	{
		uart_tx(n[x]);
	}
}