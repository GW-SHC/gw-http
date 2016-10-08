#include "ringbuffer.h"
#include <string.h>
#include <stdio.h>
void init(RingBuffer *buffer)
{
	buffer->size = 0;
	buffer->head = 0;
	buffer->tail = 0;
	int i = 0;
	for(i = 0;i < buffer->size; i ++)
	{
		buffer[i] = NULL;
	}
}
void add(Ticket *ticket, RingBuffer *buffer)
{
	int head = buffer->head;
	int tail = buffer->tail;
	int size = buffer->size;
	tail ++;
	tail = tail % size;
	buffer->tickets[tail] = ticket;
}
Ticket * createTicket(char * name, int count)
{
	Ticket * ticket = (Ticket *)malloc(sizeof(Ticket));
	ticket->count = count;
	strcpy(ticket->name, name);
	return ticket;
}

void freeticket(Ticket *ticket)
{
	if(!ticket)
	{
		return
	}
	else
	{
		free(ticket->path);
		free(ticket);
	}

}
