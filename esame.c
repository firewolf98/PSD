queue reverseQueue(queue q) {
  item e;
  if(!emptyQueue(q)) {
    e=deQueue(q);
    reverseQueue(q);
    enQueue(q,e);
  }
}

void mergesort(list l,int p,int r){
  int q;
  if(p<r) {
    q=(p+r)/2;
    while(p<q && sizeList(l)>2){
      item e=getFirst(l);
      l=tailList(l);
      list l1=consList(l1,e);
      p++;
    }
    mergesort(l1,p,q);
    mergesort(l,q+1,r);
    merge(l,p,q,r);
  }
}

void merge(list l,int p,int q,int r) {
  

  }
}
