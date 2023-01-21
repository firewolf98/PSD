#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "stack.h"
#DEFINE STARTSIZE 50
#DEFINE ADDSIZE 20

struct c_stack{
  item *vet;
  int size;
  int top;
}

stack newStack() {
  struct s=malloc(sizeof(struct c_stack));
  if(s==NULL)
    return NULL;
  s->vet=malloc(STARTSIZE*sizeof(struct c_stack));
  if(s->vet==NULL)
    return NULL;
  s->size=STARTSIZE;
  s->top=0;
  return s;
}

int emptyStack() {
  return s->top==0;
}

int push(item val,stack s) {
  if(s->top==s->size) {
    item *temp=realloc(s->vet,(s->size+ADDSIZE)*sizeof(struct c_stack));
    if (temp==NULL)
      return 0;
    s->vet=temp;
    s->size=s->size+ADDSIZE;
  }
  s->vet[s->top]=val;
  (s->top)++;
  return 1;
}

int pop(stack s) {
  if(s->top==0)
    return 0;
  (s->top)--;
  return 1;
}

item top(stack s) {
  item e;
  if(s->top>0)
    e=s->vet[s->top-1];;
  else
    e=NULLITEM;
  return e;
}
