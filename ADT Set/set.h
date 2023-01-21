typedef struct c_set *set;
set newSet();
int emptySet(set s);
int cardinality(set s);
int contains(set s,item e);
int insertSet(set s,item e);
int removeSet(set s, item e);
int unionSet(set s1,set s2);
int intersectSet(set s1,set s2);
