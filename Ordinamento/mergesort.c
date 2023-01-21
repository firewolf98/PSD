void mergesort(int a[],int p,int r){
  int q;
  if(p<r) {
    q=(p+r)/2;
    mergesort(a,p,q);
    mergesort(a,q+1,r);
    merge(a,p,q,r);
  }
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
