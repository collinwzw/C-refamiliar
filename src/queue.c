#include <stdio.h>
#include <stdlib.h>

struct LinkList{
	int value;
	struct linkList* next;
};

struct Queue{
	struct LinkList* head;
	struct LinkList* tail;
	int capacity;
	int noElement;
};

struct Queue* createQueue(int capacity){

	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity  = capacity;
	queue->noElement= 0;
	queue->head= (struct LinkList*)malloc(sizeof(struct LinkList));
	queue->head=NULL;
	queue->tail= (struct LinkList*)malloc(sizeof(struct LinkList));
	queue->tail=NULL;
	return queue;
}

int isFull(struct Queue* q){
	return q->noElement == q->capacity;
}

void enqueue(struct Queue* q, int value){
	if (isFull(q)) return;
	if(q->head == NULL){
		q->head->value = value;
		q->tail = q->head;
	}
	else{
		struct LinkList* newNode = (struct LinkList*)malloc(sizeof(struct LinkList)); 
		q->tail->next = newNode;
		q->tail = newNode;
	}
	q->noElement +=1;
}
int main(){

struct Queue* q = createQueue(9);
enqueue(q,1);
printf("the first element in queue is %d", q->head->value);
return 0;
}