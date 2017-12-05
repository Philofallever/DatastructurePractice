#include <stdio.h>
#include <stdlib.h>
#include "LinkQueue.h"

/*这个对列有问题*/

status initQueue(LinkQueue * plinkqueue)
{
	plinkqueue->near = plinkqueue->rear = (pQNode )malloc(sizeof(QNode));
	if (plinkqueue->near == NULL)
	{
		exit(OVERFLOW);
	}
	else
	{
		plinkqueue->near->next = NULL;
		return OK;
	}
}


status destoryQueue(LinkQueue * plinkqueue)
{
	while (plinkqueue->near)
	{
		plinkqueue->rear = plinkqueue->near->next;
		free(plinkqueue->near);
		plinkqueue->near = plinkqueue->rear;
	}
	return OK;
}

status clearQueue(LinkQueue * plinkqueue)
{
	return OK;
}

int getLength(LinkQueue * plinkqueue)
{
	int length = 0;
	pQNode temp = plinkqueue->near;
	while (plinkqueue->near)
	{
		length++;
		plinkqueue->near = plinkqueue->near->next;
	}
	return length;
}

status	getHead(LinkQueue * plinkqueue, QElemt * e)
{
	if (plinkqueue->near == NULL)
	{
		return ERROR;
	}
	*e = plinkqueue->near->data;
	return OK;
}

status enQueue(LinkQueue * plinkqueue, QElemt *e)
{
	pQNode new_node = (pQNode)malloc(sizeof(QNode));
	if (new_node == NULL)
	{
		exit(OVERFLOW);
	}
	new_node->data = *e;
	new_node->next = NULL;
	plinkqueue->rear->next = new_node;
	plinkqueue->rear = new_node;
}
//注意删除最后一个节点的特殊情况
status deQueue(LinkQueue * plinkqueue, QElemt *e)
{
	if (plinkqueue->near == plinkqueue->rear)
	{
		return ERROR;
	}
	pQNode temp_pQNode = plinkqueue->near;
	*e = temp_pQNode->data;
	plinkqueue->near = plinkqueue->near->next;
	if (plinkqueue->rear == temp_pQNode)
	{
		plinkqueue->rear = plinkqueue->near;
	}
	free(temp_pQNode);
	return OK;
}