#include <stdio.h>
#include "queue.h"
//#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	QUEUE line;
	Item temp;
	char  ch;

	InitializeQueue(&line);
	puts("Testing the Queue interface.Type a to add a value,");
	puts("type d to delete a value,and type q to delete.");

	while ((ch=getchar()) !='q' )
	{
		if (ch != 'a' && ch != 'd')
		{
			puts(" use 'a' to add ,'d' to delete.");
			continue;
		}
		if (ch == 'a')
		{
			puts("Integer to add: ");
  			scanf_s("%d", &temp);
			if (!QueueIsFull(&line))
			{
				printf("Putting %d in to queue\n", temp);
				EnQueue(temp, &line);
			}
			else
			{
				puts("queue is full.");
			}
		}
		else
		{
			if (QueueIsEmpty(&line))
			{
				puts("Nothing to delete.");
			}
			else
			{
				DeQueue(&temp, &line);
				printf("Removing %d from queue\n", temp);
			}
		}

		printf("%d items in queue\n", QueueItemCount(&line));
		puts("Type a to add, d to delete.q to quit:");
	}
	EmptyQueue(&line);
	puts("Bye!");
}