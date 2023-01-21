typedef struct node *btree;
btree newBTree();
int emptyBTree(btree t);
int consBTree(item val,btree sx,btree dx);
item getRoot(btree t);
btree leftBTree(btree t);
btree rightBtree(btree t);
