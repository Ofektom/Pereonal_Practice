#include "main.h"

singly *head = malloc(sizeof(singly));
head -> data = 45;
head -> link = NULL;

singly *ptr = malloc(sizeof(singly));
ptr -> data = 98;
ptr -> link = NULL;

head -> link = ptr;

int data = 3;
head = add_at beg(
