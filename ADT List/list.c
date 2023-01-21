#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"

struct node {
  item value;
  struct node *next;
}

struct c_list {
  struct node *first;
  int size;
}

list newList() {
  return NULL;
}

int emptyList(list l) {
  return l==NULL;
}

list consList(item val,list l) {
  struct node *nuovo;
  nuovo=malloc(sizeof(struct_node));
  if(nuovo!=NULL) {
    nuovo->value=val;
    nuovo->next=l;
    l=nuovo;
  }
  return l;
}

list tailList(list l) {
  list temp;
  if(l!=NULL)
    temp=l->next;
  else
    temp=NULL;
  return temp;
}

item getFirst(list l) {
  item e;
  if(l!=NULL)
    e=l->value;
  else
    e=NULLITEM;
  return e;
}

int sizeList(list l) {
  int n=0;
  while(!emptyList(l)) {
    l=tailList(l);
    n++;
  }
  return n;
}

int posItem(list l,item val) {
  int pos;
  int found=0;
  while(!emptyList(l) && !found) {
    if(eq(l->value,val))
      found)=1;
    else {
        pos++;
        l=tailList(l);
    }
  }
  if(!found)
    pos=-1;
  return pos;
}

list inputList(int n) {
  item val;
  list=newList();
  for(int i=0;i<n;i++) {
    printf("Elemento di posizione %d",i);
    input_item(&val);
    l=consList(val,l);
  }
  return l;
}

item getItem(list l,int pos) {
  item e;
  int i=0;
  while(i<pos && !emptyList(l)) {
    i++;
    l=tailList(l);
  }
  if(!emptyList(l))
    e=getFirst(l);
  else
    e=NULLITEM;
  return e;
}

list reverseList(list l) {
  list l1;
  item val;
  l1=newList();
  while(!emptyList(l)){
    val=getFirst(l);
    l=tailList(l);
    l1=consList(val,l1);
  }
  return l1;
}

void outputList(list l) {
  item val;
  int i=0;
  while(!emptyList(l)) {
    val=getFirst(l);
    printf("Elemento di posizione %d",i);
    output_item(val);
    printf("\n");
    l=tailList(l);
    i++;
  }
}

list insertList(list l,int pos,item val) {
  item x;
  int i=0;
  list l0=l;
  list temp=newList();
  while(i<pos && !emptyList(l)){
    x=getFirst(l);
    temp=consList(x,temp);
    l=tailList(l);
    i++;
  }
  if(i==pos) {
    l0=consList(val,l);
    while(!emptyList(temp)){
      x=getFirst(temp);
      l0=consList(x,l0);
      temp=tailList(temp);
    }
  }
  return l0;
}

list removeList(list l,int pos) {
  list l1;
  if(pos==0 && l!=NULL) {
    l1=l;
    l=l->next;
    free(l1);
  }
  else {
    int i=0;
    list prec=l;
    while(i<pos && prec!=NULL) {
      prec=prec->next;
      i++;
    }
    if(prec!=NULL && prec-next!=NULL){
      l1=prec->next;
      prec->next=l1->next;
      free(l1);
    }
  }
  return l;
}

static struct node *makenode(item val,struct node *next) {
  struct node *nuovo=malloc(sizeof(struct node));
  if(nuovo!=NULL) {
    nuovo->value=val;
    nuovo->next=next;
  }
  return nuovo;
}

list cloneList(list l) {
  if(l==NULL)
    return NULL;
  if(emptyList(l))
    return newList();
  struct node *temp=l->first;
  list l1=newList();
  l1->first=makenode(temp->value,NULL);
  struct node *temp1=l->first;
  while(temp->next!=NULL) {
    temp1->next=makenode(temp->next->value,NULL);
    temp=temp->next;
    temp1=temp1->next;
  }
  l1->size=l->size;
  return l1;
}
