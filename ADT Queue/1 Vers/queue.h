typedef struct c_queue *queue;
queue newQueue();
int emptyQueue(queue q);
int enQueue(item val,queue q);
item deQueue(queue q);
