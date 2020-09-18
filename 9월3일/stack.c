

#include <stdio.h>
#include <stdlib.h>
#define MAX 100;

typedef struct Node {
	int data;
	struct Node *next;
}Node;

typedef struct Stack {
	Node *top;
}Stack;

void InitStack(Stack *stack);
int IsEmpty(Stack *stack);
void Push(Stack *stack, int data);
int Pop(Stack *stack);

int main() {

	int i;
	Stack stack;

	InitStack(&stack);
	for(i=1; i<6; i++) {
		Push(&stack, i);
		printf("push한 값 : %d \n", i);
	}
	while(!IsEmpty(&stack)) {
		printf("%d ", Pop(&stack));
	}
	printf("\n");
	return 0;
}

void InitStack(Stack *stack) {
	stack->top = NULL;
}
int IsEmpty(Stack *stack) {
	return stack->top == NULL;
}
void Push(Stack *stack, int data) {
	Node *now = (Node*)malloc(sizeof(Node) + 1);
	now->data = data;
	now->next = stack->top;
	stack->top = now;
}
int Pop(Stack *stack) {
	Node *now;
	int re;
	if(IsEmpty(stack)) return 0;
	now = stack->top;
	re = now->data;

	stack->top = now->next;
	free(now);

	return re;
}
