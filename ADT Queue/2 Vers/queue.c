#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "queue.h"
#DEFINE MAXQUEUE 100

struct c_queue{
  item *vet;
  int size;
  int numEl;
  int head,tail;
};

queue newQueue(int maxSize) {
  struct c_queue *q=malloc(sizeof(struct c_queue));
  if(q==NULL)
    return NULL;
  if(maxSize<=0)
    q->size=MAXQUEUE;
  else
    q->size=maxSize;
  q->vet=malloc((q->size)*sizeof(item));
  q->numEl=0;
  return q;
}

int emptyQueue(queue q) {
  return (q->numEl==0);
}

int enQueue(item val,queue q) {
  if(q==NULL)
    return -1;
  if(q->numEl==q->size)
    return 0;
  if(q->numEl==0)
    q->head=q->tail=0;
  else
    q->tail=(q->tail+1)%(q->size);
  q->vet[q->size]=val;
  q->numEl++;
  return 1;
}

item deQueue(queue q) {
  if(q->numEl==0)
    return NULLITEM;
  item result=q->vet[q->head];
  q->head=(q->head+1)%(q->size);
  q->numEl--;
  return result;
}

void outputQueue(queue q) {
  if(q==NULL)
    return;
  if(q->numEl==0)
    return;
  int pos;
  for(pos=q->head;pos!=q->tail;pos=(pos+1)%q->size) {
    output_item(q->vet[pos]);
  }
  output_item(q->vet[q->tail]);
}
