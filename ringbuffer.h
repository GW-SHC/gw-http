#include <stdio.h>
typedef struct ticket
{
	int count;
	char name[];
}Ticket;

typedef struct RingBuffer
{
	int size;
	ticket * buffer[size];
	int head;
	int tail;
}RingBuffer;

