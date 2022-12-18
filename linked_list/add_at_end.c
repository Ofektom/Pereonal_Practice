#include "main.h"

singly *add_at_end(singly *ptr, int data)
{
	singly *temp = malloc(sizeof(singlt));
	temp -> data = data;
	temp -> link = NULL;

	ptr -> link = temp;
	return ptr;
}
