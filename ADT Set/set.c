#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "set.h"

struct node{
  item value;
  struct node *next;
}

struct c_set {
  struct node *first;
  int size;
}

set newSet() {
  struct c_set *s;
  s=malloc(sizeof(struct c_set));
  if(s!=NULL) {
    s->first=NULL;
    s->size=0;
  }
  return s;
}

int emptySet(set s) {
  if(s==NULL)
    return -1;
  return(s->size==0);
}

int cardinality(set s) {
  if (s==NULL)
    return -1;
  return s->size;
}

int contains(set s,item val) {
  if(s==NULL)
    return 0;
  int found=0;
  struct node *temp=s->first;
  while(temp!=NULL && !found) {
    if(eq(temp->value,val))
      found=1;
    else
      temp=temp->next;
  }
  return found;
}

static struct node *makenode(item val,struct node *next){
  struct node *nuovo=malloc(sizeof(struct node));
  if(nuovo!=NULL) {
    nuovo->value=val;
    nuovo->next=next;
  }
  return nuovo;
}

int insertSet(set s,item val){
  if(s==NULL)
    return -1;
  if(s->first==NULL) {
    s->first=makenode(val,NULL);
    if(s->first==NULL)
      return -1;
  }
  struct node *temp=s->first;
  if(eq(temp->value,val))
    return 0;
  int found=0;
  while(temp->next!=NULL && !found) {
    if(eq(temp->value,val))
      found=1;
    else
      temp=temp->next;
  }
  if(found)
    return 0;
  temp->next=makenode(val,NULL);
  if(temp->next==NULL)
    return -1;
  s->size++;
  return 1;
}
