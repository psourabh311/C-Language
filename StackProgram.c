#include <stdio.h>
#define MAX 5

int arr[MAX];
int i = -1;

void isempty()
{
    if (i == -1)
    {
        printf("The Stack is empty\n");
    }
}

void isfull()
{
    if (i == MAX - 1)
    {
        printf("The Stack is full\n");
    }
}

void push(int element)
{
    if (i == MAX - 1)
    {
        printf("The Stack is full\n");
    }
    else
    {
        i++;
        arr[i] = element;
        printf("Pushed element: %d \n", arr[i]);
    }
}

void peek()
{
    if (i == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Top element is: %d\n", arr[i]); // Removed extra space before newline
    }
}

void pop()
{
    if (i == -1)
    {
        printf("The Stack is Empty\n");
    }
    else
    {
        printf("Popped element: %d \n", arr[i]);
        i--;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    // Trying to push when stack is full
    push(6);

    // Peek the top element
    peek();

    // Pop all elements
    pop();
    pop();
    pop();
    pop();
    pop();

    // Trying to pop when stack is empty
    pop();

    return 0;
}
