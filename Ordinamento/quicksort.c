void quicksort(int a[],int p,int r) {
  int q;
  if(p<r){
    q=partition(a,p,r);
    quicksort(a,p,q);
    quicksort(a,q+1,r);
  }
}

int partition(int a[],int p,int r) {
  int x,i,j,temp;
  x=a[p];
  i=p-1;
  j=r+1;
  while(i-j) {
    while(a[--j]>x)
    while(a[++i]<x)
    if(i<j) {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
  return j;
}
