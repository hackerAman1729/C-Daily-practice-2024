#include <stdio.h>

#define Stack_Size 5

struct Stack{
int top;
int data[Stack_Size];

};

void initStack(struct Stack *ourstack){
  ourstack->top = -1;
}

int isFull(struct Stack *ourstack){
  if(ourstack->top == Stack_Size -1)
    return 1;
  return 0;
    
}

int isEmpty(struct Stack *ourstack){
  if(ourstack->top == -1)
    return 1;
  return 0;
}

void push(struct Stack *ourstack, int value){
  if(isFull(ourstack)){
    printf("Stack Overflow\n");
    return;
  }
  ourstack->top++;
  ourstack->data[ourstack->top] = value;
}
  
int pop(struct Stack *ourstack){
  if(isEmpty(ourstack)){
    printf("Stack underflow\n");
    return -1;
  }
  return ourstack->data[ourstack->top--];
}

int peek(struct Stack *ourstack){
  if(isEmpty(ourstack)){
    printf("Stack is empty. Watchu lookin at?\n");
    return -1;
  }
  return ourstack->data[ourstack->top];
}



int main(){
  struct Stack ourstack;
  initStack(&ourstack);

  push(&ourstack, 1);
  push(&ourstack, 2);
  push(&ourstack, 3);

  printf("Top Item %d\n", peek(&ourstack));
  printf("Popped %d\n", pop(&ourstack));
  printf("Current top item %d\n", peek(&ourstack));

  return 0;

}