#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "stack.h"
#DEFINE MAXSTACK 50

struc c_stack{
  item vet[MAXSTACK];
  int top;
}

stack newStack() {
  stack *c;
  c=malloc(sizeof(struct c_stack));
  if(c==NULL)
    return NULL;
  s->top=0;
  return s;
}

int emptyStack(stack s) {
  return s->top==0;
}

int push(item val,stack s) {
  if(s->top==MAXSTACK)
    return 0;
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

item top(stack s){
  item e;
  if(s->top>0)
    e=s->vet[s->top-1];
  else
    e=NULLITEM;
  return e;
}
