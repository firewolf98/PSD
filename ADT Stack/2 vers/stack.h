typedef struct c_stack *stack;
stack newStack();
int emptyStack(stack s);
int pop(stack s);
int push(item val,stack s);
item top(stack s);
