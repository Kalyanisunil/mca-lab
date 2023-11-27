#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
struct Node* prev;
struct Node* next;
};
struct Node* createNode(int data) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = data;
  newNode->prev = NULL;
 newNode->next = NULL;
 return newNode;
}
void insertAtBeginning(struct Node** head, int data) {
 struct Node* newNode = createNode(data);
 if (*head == NULL) {
*head = newNode;
} else {
newNode->next = *head;
(*head)->prev = newNode;
 *head = newNode;
 }
}
void insertAtEnd(struct Node** head, int data) {
 struct Node* newNode = createNode(data);
if (*head == NULL) {
*head = newNode;
 }
 else {

 struct Node* current = *head;
  while (current->next != NULL) {
 current = current->next;
 }
current->next = newNode;
newNode->prev = current;
 }
}
void insertAtPosition(struct Node** head, int data, int position) {
if (position <= 0) {
printf("Invalid position!!.\n");
return;
 } 
 if(position == 1 || *head == NULL) {
 insertAtBeginning(head, data);
 return;
  }
 struct Node* newNode = createNode(data);
 struct Node* current = *head;
 int currentPosition = 1;
 while (currentPosition < position - 1 && current->next != NULL) {
  current = current->next;
  currentPosition++;
 }

 newNode->next = current->next;
 newNode->prev = current;
 if (current->next != NULL) {
  current->next->prev = newNode;
  }
 current->next = newNode;
}
void deleteAtBeginning(struct Node** head) {
 if (*head == NULL)
 return;

struct Node* current = *head;
 *head = current->next;
 if (*head != NULL) {
   (*head)->prev = NULL;
 }
  free(current);
}
void deleteAtEnd(struct Node** head) {
 if (*head == NULL)
 return;
 struct Node* current = *head;
 while (current->next != NULL) {
 current = current->next;
 }
 if (current->prev != NULL) {
 current->prev->next = NULL;
 } 
else
 {

 *head = NULL;
 }
   
 free(current);
}
void deleteAtPosition(struct Node** head, int position) {
 if (position <= 0 || *head == NULL) {
 printf("Invalid position or empty list. Deletion failed.\n");
   return;
  }

 struct Node* current = *head;
    int currentPosition = 1;

    while (currentPosition < position && current != NULL) {
        current = current->next;
        currentPosition++;
    }

    if (current == NULL) {
        printf("Position out of range. Deletion failed.\n");
        return;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        *head = current->next;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    free(current);
}
struct Node* search(struct Node* head, int data) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == data)
            return current;
        current = current->next;
    }
    return NULL;
}
void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d \t ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, position;

    while (1) {

        printf("1. insert at  beginning\n");
        printf("2. insert at  end\n");
        printf("3. insert at a  position\n");
        printf("4. delete at  beginning\n");
        printf("5. delete at  end\n");
        printf("6. delete at  position\n");
        printf("7. search \n");
        printf("8. display\n");
        printf("9. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("enter data to insert at  beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                printf("enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 3:
                printf("enter data to insert: ");
                scanf("%d", &data);
                printf("enter position to insert: ");
                scanf("%d", &position);
                insertAtPosition(&head, data, position);
                break;
            case 4:
                deleteAtBeginning(&head);
                printf("deleted the node at beginning.\n");
                break;
            case 5:
                deleteAtEnd(&head);
                printf("deleted the node at  end.\n");
                break;
            case 6:
                printf("enter position: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
                break;
            case 7:
                printf("enter data to search: ");
                scanf("%d", &data);
                struct Node* searchResult = search(head, data);
                if (searchResult)
                    printf("found node with value %d\n", data);
                else
                    printf("node with value %d not found\n", data);
                break;
            case 8:
                printf("doubly Linked List: ");
                display(head);
                break;
            case 9:
                printf("exiting\n");
                exit(0);
            default:
                printf("invalid choice!!!.\n");
        }
    }

    return 0;
}

