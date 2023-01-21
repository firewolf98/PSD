void mergesort(int a[],int p,int r) {
  int q;
  if(p<r)
    q=(p+r)/2;
  mergesort(a,p,q);
  mergesort(a,q+1,r);
  merge(a,p,q,r);
  return;
}

void merge(int a[],int p,int q,int r) {
  int b[MAX],i,j,k;
  for(i=p,j=q+1,k=p;i<=q && j<=r;)
    if(a[i]<a[j])
      b[k++]=a[i++];
    else
      b[k++]=a[j++];
  for(;i<=q;)
    b[k++]=a[i++];
  for(;j<=r;)
    b[k++]=a[j++];
  for(k=p;k<=r;k++)
    a[k]=b[k];
  return;
}

void quicksort(int a[],int p,int r) {
  int q;
  if(p<r) {
    q=partition(a,p,r);
    quicksort(a,p,q);
    quicksort(a,q+1,r);
  }
}

int partition(int a[],int p,int r){
  int i,j,x,temp;
  x=a[p];
  i=p-1;
  j=r+1;
  while(i<j) {
    while(a[--j]>x);
    while(a[++i]<x);
    if(i<j){
      temp=a[i];
      a[i]=a[j];
      a[j]=a[i];
    }
  }
  return j;
}
