int ricercaBinaria(int valore,int vettore[],int primo,int ultimo) {
  if(primo>ultimo)
    return -1;
  int mid=(primo+ultimo)/2;
  if(valore==vettore[mid])
    return ricercaBinaria(valore,vettore,primo,mid-1);
  else
    return ricercaBinaria(valore,vettore,mid+1,ultimo);
}
