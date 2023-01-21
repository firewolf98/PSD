#include <stdio.h>
#include "item.h"

int eq(int x,int y) {
  return x==y;
}

void input_item(item *x) {
  scanf("%d",x);
}

void output_item(item x) {
  printf("%d",x);
}
