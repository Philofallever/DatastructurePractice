#pragma once
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include<stdbool.h>
typedef int Item;

#define MAXQUEUE 100

typedef struct node
{
	Item item;
	struct node * next;
} Node;

typedef struct queue
{
	Node * front;
	Node * rear;
	int items;
} QUEUE;

//initialize a queue
void InitializeQueue(QUEUE * pq);
//is a queue is full
bool QueueIsFull(const QUEUE * pq);

bool QueueIsEmpty(const QUEUE * pq);

int QueueItemCount(const QUEUE * pq);

bool EnQueue(Item item,QUEUE * pq);

bool DeQueue(Item * item, QUEUE * pq);

void EmptyQueue(QUEUE * pq);

#endif // !_QUENUE_H_