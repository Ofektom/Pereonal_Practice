#include "main.h"

singly *add_at _beg(singly *head, int d)
{
	singly *ptr = malloc(sizeof(singly));
	ptr -> data = d;
	ptr -> lint = NULL;

	ptr -> linl = head;
	head =ptr;
	return head;
}
