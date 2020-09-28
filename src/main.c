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
#include <string.h>
#include "linkList.h"
#include "string_reverse.h"

//int main(int argc, char** argv){
//
//	struct linkList* head = (struct linkList*)malloc(sizeof(struct linkList*));
//	head = NULL;
//
//	struct linkList* node1 = (struct linkList*)malloc(sizeof(struct linkList*));
//	head = node1;
//	node1->value = 1;
//	node1->next = NULL;
//
//	printf("%d",(*head).value);
//
//	return 0;
//}

int main(int argc, char** argv){
	char *input[10] = "Hello";
	printf("%s with length %d\n", input, strlen(input));
	reverseStringNolength(input);

	printf("Reverse of entered string is \"%s\".\n", input);
	return 0;
}
