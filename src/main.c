/*
 ============================================================================
 Name        : 123.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkList.h"


int main(int argc, char** argv){

	struct linkList* head = (struct linkList*)malloc(sizeof(struct linkList*));
	head = NULL;

	struct linkList* node1 = (struct linkList*)malloc(sizeof(struct linkList*));
	head = node1;
	node1->value = 1;
	node1->next = NULL;

	printf("%d",(*head).value);

	return 0;
}
