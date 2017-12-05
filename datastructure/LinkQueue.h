#pragma once
#include "common.h"

typedef struct QElemt
{
	int iValue;
	float fValue;
} QElemt;

typedef struct QNode
{
	QElemt data;
	struct QNode * next;
} QNode, * pQNode;

typedef struct LinkQueue
{
	pQNode  near;
	pQNode  rear;
}LinkQueue;

//队列的基本操作
//构造一个空队列
status initQueue(LinkQueue * plinkqueue);

//摧毁一个空队列
status destoryQueue(LinkQueue * plinkqueue);

//清空一个空队列
status clearQueue(LinkQueue * plinkqueue);

//队列的当前长度
int getLength(LinkQueue * plinkqueue);

//取得队列的对头的数据，返回OK/ERROR
status getHead(LinkQueue * plinkqueue,QElemt * e);

//将元素压人队列
status enQueue(LinkQueue * plinkqueue, QElemt * e);

//将对头弹出队列，返回OK/ERROR
status deQueue(LinkQueue * plinkqueue, QElemt * e);

