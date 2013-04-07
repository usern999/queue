#include <stdio.h>

/**
	\file queue_w.cpp queue file
*/


/**
 push
 */

/**
	\param top first item
	\param bottom last item
	\param a array
*/

void push(int *top,int *bottom,int *a)
{
	int b;
	if(!*top)
	{
		if(*bottom!=4)
		{
		*top=5;
		}
		else
		{
			printf("queue is full\n");
			return;
		}
	}
	else
	{
		if(*top-1==*bottom)
		{
			printf("queue is full\n");
			return;
		}
	}
	--*top;
	
	printf("\nCount of elem\n");
	scanf("%d",&b);
	a[*top]=b;
	printf("\n\n");
}

/**
 pop
 */

/**
	\param top first item
	\param bottom last item
	\param a array
*/

void pop(int *top,int *bottom,int *a)
{
	if (*bottom==*top)
	{
		printf("queue is empty\n\n");
		return;
	}
	if(!*bottom)
	{
		if(*top!=4)
		{
			*bottom=5;
		}
		else
		{
			printf("queue is empty\n\n");
			return;
		}
	}
	--*bottom;
	printf("\n\n");
}

/**
 count
 */

/**
	\param top first item
	\param bottom last item
	\param a array
*/

void count(int *top,int *bottom,int *a)
{
	if(*bottom==*top)
	{
		printf("queue is empty\n\n");
		return;
	}
	if(*bottom)
	{
	printf("Elem=%d\n\n",a[*bottom-1]); 
	}
	else
	{
		printf("Elem=%d\n\n",a[4]);
	}
}

void main()
{
	int a[5],top=4,bottom=4;
	int b;
	while(1)
	{
		printf("1-push\n2-pop\n3-count\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
			push(&top,&bottom,a);
			break;
		case 2:
			pop(&top,&bottom,a);
			break;
		case 3:
			count(&top,&bottom,a);
			break;
		}
	}


}