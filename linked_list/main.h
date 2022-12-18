#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}singly;

singly *add_at_end(singly *ptr, int data);
singly *add_at_beg(singly *head, int d);
}/*MAIN_H*/
