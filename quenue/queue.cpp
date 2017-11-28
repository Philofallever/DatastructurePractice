#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

//static function
static void CopyToNode(Item item, Node * pn);
static void CopyToItem(Node * pn, Item * pi);

void InitializeQueue(QUEUE * pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

bool QueueIsFull(const QUEUE * pq)
{
	return pq->items == MAXQUEUE;
}

bool QueueIsEmpty(const QUEUE * pq)
{
	return pq->items == 0;
}

int QueueItemCount(const QUEUE *pq)
{
	return pq->items;
}

bool EnQueue(Item item, QUEUE * pq)
{
	Node * pnew;
	if (QueueIsFull(pq))
		return false;
	pnew = (Node *)malloc(sizeof(node));
	if(pnew ==NULL)
	{
		fprintf(stderr, "Unable to allocate memory!\n");
		exit(1);
	}

	CopyToNode(item,pnew);
	pnew->next = NULL;
	if (QueueIsEmpty(pq))
	{
		pq->front = pnew;
	}
	else
	{
		pq->rear->next = pnew;
	}
	pq->rear = pnew;
	pq->items++;
	return true;
}

bool DeQueue(Item * pitem, QUEUE * pq)
{
	Node * pt;
	if (QueueIsEmpty(pq))
		return false;
	CopyToItem(pq->front, pitem);
	pt = pq->front;
	pq->front = pq->front->next;
	free(pt);
	pq->items--;
	if (pq->items == 0)
		pq->rear = NULL;
	return true;
}

void EmptyQueue(QUEUE * pq)
{
	Item dummy;
	while (!QueueIsEmpty(pq))
	{
		DeQueue(&dummy, pq);
	}
}

static void CopyToNode(Item item, Node * pn)
{
	pn->item = item;
}

static void CopyToItem(Node * pn, Item * pi)
{
	* pi = pn->item;
}