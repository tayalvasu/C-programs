#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum size of the stack

int stack[MAX_SIZE]; // Array to store the stack elements
int top = -1; // Initialize the top of the stack

// Function to push an element onto the stack
void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow: Cannot push element onto the stack.\n");
        return;
    }
    stack[++top] = value;
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        printf("Stack Underflow: Cannot pop element from an empty stack.\n");
        return -1; // Return a sentinel value to indicate an error
    }
    return stack[top--];
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to print the elements of the stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    
    display(); // Display the stack elements
    
    printf("Popped element: %d\n", pop());
    
    display(); // Display the stack elements after popping
    
    return 0;
}