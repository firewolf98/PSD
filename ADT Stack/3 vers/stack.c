#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "stack.h"

struct node{
  item value;
  struct node *next;
}

struct c_stack{
  struct node *top;
}

stack newStack() {
  stack s;
  s=malloc(sizeof(struct c_stack));
  if(s==NULL)
    return NULL;
  s->top=NULL;
  return s;
}

int push(item val,stack s) {
  struct node *nuovo;
  nuovo=malloc(sizeof(struct node));
  if(nuovo==NULL)
    return 0;
  nuovo->value=val;
  nuovo->next=s->top;
  s->top=nuovo;
  return 1;
}

int pop(stack s) {
  if(s->top==NULL)
    return 0;
  struct node *temp;
  temp=s->top;
  s->top=s->top->next;
  free(temp);
  return 1;
}

item top(stack s) {
  if(s->top==NULL)
    return NULLITEM
  return s->top->value;
}
