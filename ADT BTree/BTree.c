#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "BTree.h"

struct node {
  item value;
  struct node *left;
  struct node *right;
}

btree newBTree(){
  return NULL;
}

int emptyBTree(btree t){
  return t==NULL;
}

item getRoot(btree t){
  if(t!=NULL)
    return t->value;
  return NULLITEM;
}

btree leftBTree(btree t){
  if(t!=NULL)
    return t->left;
  return NULL;
}

btree rightBtree(btree t) {
  if(t!=NULL)
    return t->right;
  return NULL;
}

btree consBTree(item val,btree sx,btree dx) {
  struct node *nuovo;
  nuovo=malloc(sizeof(struct node));
  if(nuovo!=NULL) {
    nuovo->value=val;
    nuovo->left=sx;
    nuovo->right=dx;
  }
  return nuovo;
}
