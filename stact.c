#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 3

typedef struct {
    int top;
    int stack[MAX_SIZE];
} Stack;

Stack create_stack() {
    Stack stack;
    stack.top = -1;
    return stack;
}

int is_full(Stack stack) {
    return stack.top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if (is_full(*stack)) {
        printf("Stack is full. Can't push to stack.\n");
        return;
    }
    stack->top++;
    stack->stack[stack->top] = value;
}

int main() {
    Stack stack = create_stack();

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    printf("Stack: %d %d %d\n", stack.stack[0], stack.stack[1], stack.stack[2]);
    push(&stack, 4);

    return 0;
}
