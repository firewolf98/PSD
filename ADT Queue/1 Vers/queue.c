#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "queue.h"

struct node{
  item value;
  struct node *next;
}

struct c_queue{
  struct node *head,*tail;
  int numEl;
}

queue newQueue() {
  struct c_queue *q;
  q=malloc(sizeof(struct c_queue));
  if(q==NULL)
    return NULL
  q->head=NULL;
  q->tail=NULL;
  q->numEl=0;
  return q;
}

int emptyQueue(queue q) {
  if(q==NULL)
    return -1;
  return (q->numEL==0);
}

int enQueue(item val,queue q) {
  if(q==NULL)
    return -1;
  struct node *nuovo;
  nuovo=malloc(sizeof(struct node));
  if(nuovo==NULL)
    return 0;
  nuovo->value=val;
  if(q->head==NULL)
    q->head=nuovo;
  else
    q->tail->next=nuovo;
  q->tail=nuovo;
  (q->numEL)++;
  return q;
}

item deQueue(queue q) {
  if(q==NULL)
    return NULLITEM;
  if(q->numEL==0)
    return NULLITEM;
  item result=q->head->value;
  struct node *temp=q->head;
  q->head=q->head->next;
  free(temp);
  if(q->head==NULL)
    q->tail==NULL;
  (q->numEl)--;
  return result;
}
