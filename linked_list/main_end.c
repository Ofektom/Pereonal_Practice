#include "main.h"

int main(void)
{
	singly *head = malloc(sizeof(singly));
	head -> data = 45;
	head -> link = NULL;

	sinly *ptr =head;
	ptr = add_at_end(ptr, 97);
	ptr = add_at_end(ptr, 3);
	ptr = add_at_end(prt, 35);

	ptr = head;

	while (ptr != NULL)
	{
		printf("%d", ptr -> data);
		ptr = ptr -> link;
	}
	return 0;
}
