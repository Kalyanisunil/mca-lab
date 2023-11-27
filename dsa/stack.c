#include <stdio.h>
#include <stdlib.h>

// Define the structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL; // Initialize the stack top as NULL

// Function to push an element onto the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Stack is full.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed onto the stack.\n", value);
}

// Function to pop an element from the stack
void pop() {

if (top == NULL) {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }
    struct Node* temp = top;
    top = top->next;
    int poppedValue = temp->data;
    free(temp);
    printf("%d popped from the stack.\n", poppedValue);
}

// Function to search for an element in the stack
int linearSearch(int value) {
    struct Node* current = top;
    int position = 0;

    while (current != NULL) {
        if (current->data == value) {
            return position; // Element found
        }
        current = current->next;
        position++;
    }

    return -1; // Element not found
}

// Function to display the elements of the stack
void display() {
    struct Node* current = top;
    if (current == NULL) {
        printf("Stack is empty.\n");
        return;
    }
printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int choice, value, position;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Linear Search\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push onto the stack: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Enter value to search: ");
                scanf("%d", &value);
                position = linearSearch(value);
                if (position != -1)
                    printf("%d found at position %d from the top of the stack.\n", value, position);
                else
                    printf("%d not found in the stack.\n", value);
                break;
            case 4:
                display();
  break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

