#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct
{
    int top;
    int arr[MAX];
} Stack;

void initialize(Stack *stack)
{
    stack->top = -1;
}

int is_empty(Stack *stack)
{
    return stack->top == -1;
}

int is_full(Stack *stack)
{
    return stack->top == MAX - 1;
}

void push(Stack *stack)
{
    if (is_full(stack))
    {
        printf("Stack is full, overflow will happen!\n");
    }
    else
    {
        int item;
        printf("Enter the item to push: ");
        scanf("%d", &item);
        stack->arr[++stack->top] = item;
        printf("%d is pushed into the stack\n", item);
    }
}

int pop(Stack *stack)
{
    if (is_empty(stack))
    {
        printf("Stack is empty! You cannot pop anything from the stack\n");
        return -1; // Return -1 to indicate underflow
    }
    else
    {
        return stack->arr[stack->top--];
    }
}

int peek(Stack *stack)
{
    if (is_empty(stack))
    {
        printf("Stack is empty!\n");
        return -1; // Return -1 to indicate the stack is empty
    }
    else
    {
        return stack->arr[stack->top];
    }
}

int size(Stack *stack)
{
    return stack->top + 1;
}

int main()
{
    Stack stack;
    initialize(&stack);

    push(&stack);
    push(&stack);
    push(&stack);
    push(&stack);
    push(&stack);

    printf("Top element is %d\n", peek(&stack));
    printf("Pop element is %d\n", pop(&stack));
    printf("Size of the stack is %d\n", size(&stack));
    
    return 0;
}
