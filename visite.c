void preorder(btree t) {
  if(!emptyBTree(t)) {
    output_item(getRoot(t));
    preorder(leftBTree(t));
    preorder(rightBTree(t));
  }
}

void postorder(btree t) {
  if(!emptyBTree(t)){
    postorder(leftBTree(t));
    postorder(rightBTree(t));
    output_item(getRoot(t));
  }
}

void inorder(btree t) {
  if(!emptyBTree(t)) {
    inorder(leftBTree(t));
    output_item(getRoot(t));
    inorder(rightBTree(t));
  }
}

void preorder_iter(btree t) {
  stack s=newStack();
  if(!emptyBTree(t))
    push(t,s);
    btree curr,tsx,tdx;
    while(!emptyStack(s)) {
      curr=top(s);
      pop(s);
      output_item(getRoot(curr));
      tsx=leftBTree(curr);
      tdx=rightBTree(curr);
      if(!emptyBTree(tdx))
        push(tdx,s);
      if(!emptyBTree(tsx))
        push(tsx,s);
    }
}

void postorder_iter(btree t) {
  stack s=newStack();
  if(!emptyBTree(t))
    push(t,s);
  item val;
  btree curr,tsx,tdx,temp;
  while(!emptyStack(s)) {
    curr=top(s);
    pop(s);
    val=getRoot(curr);
    tsx=leftBTree(curr);
    tdx=rightBTree(curr);
    if(emptyBTree(tsx) && emptyBTree(tdx))
      output_item(val);
    else {
      temp=consBTree(val,emptyBTree(),emptyBTree())
      push(temp,s);
      if(!emptyBTree(tdx))
        push(tdx,s);
      if(!emptyBTree(tsx))
        push(tsx,s);
    }
  }
}

void inorder_iter(btree t) {
  stack s=newStack();
  if(!emptyBTree(t))
    push(t,s);
  item val;
  btree curr,tsx,tdx,temp;
  while(!emptyStack(s)) {
    curr=top(s);
    pop(s);
    val=getRoot(curr);
    tsx=leftBTree(curr);
    tdx=rightBTree(curr);
    if(emptyBTree(tsx) && emptyBTree(tdx))
      output_item(val);
    else {
      if(!emptyBTree(tdx))
        push(tdx,s);
      temp=consBTree(val,emptyBTree,emptyBTree);
      push(temp,s);
      if(!emptyBTree(tsx))
        push(tsx,s);
    }
  }
}

void levelorder(btree t) {
  queue q=newQueue();
  btree tsx,tdx,tr;
  enqueue(t,q);
  while(!emptyQueue(q)) {
    tr=dequeue(q);
    output_item(getRoot(tr));
    tsx=leftBTree(tr);
    tdx=rightBTree(tr);
    if(tsx!=NULL)
      enqueue(tsx,q);
    if(tdx!=NULL)
      enqueue(tdx,q);
  }
}
