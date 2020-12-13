#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char* Data;
    struct Node* Next;
}Node;
typedef struct listQueue{
    Node* Front;
    Node* Rear;
    int size;
}listQueue;

void CreateQueue(listQueue** Queue);
Node* CreateNode(char* Data);
void DeleteNode(Node* removeNode);
void DeleteQueue(listQueue* removeQueue);
Node* Peek(listQueue* frontQueue);
void Enqueue(listQueue* Queue, Node* addNode);
Node* Dequeue(listQueue* Queue);

int main(void) {

    listQueue* Que;

    CreateQueue(&Que);
    Enqueue(Que, CreateNode("andf"));
    Enqueue(Que, CreateNode("andeff"));
    Enqueue(Que, CreateNode("andfffff"));
    Enqueue(Que, CreateNode("andfsssefef333"));
    Enqueue(Que, CreateNode("anefegccdf"));
    Enqueue(Que, CreateNode("andghtf"));


    Node* temp1 = Peek(Que);
    printf("%s -->> this is front Queue\n\n", temp1->Data);
    printf("%s -->> this is Rear Queue\n\n", Que->Rear->Data);
    printf("%s -->> this is seccond Queue\n\n", temp1->Next->Data);


    return 0;
}
void CreateQueue(listQueue** Queue) {
    (*Queue) = (listQueue*)malloc(sizeof(listQueue));
    (*Queue)->Front = NULL;
    (*Queue)->Rear = NULL;
    (*Queue)->size = 0;
}
Node* CreateNode(char* Data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->Data = (char*)malloc(strlen(Data) + 1);
    newNode->Next=NULL;

    strcpy(newNode->Data, Data);

    return newNode;
}
void DeleteNode(Node* removeNode) {
    free(removeNode->Data);
    free(removeNode);
}
void DeleteQueue(listQueue* removeQueue) {
    while(removeQueue->size-- != 0) {
        Node* temp = Dequeue(removeQueue);
        printf("\n Dequeued node data ==> %s\n\n", temp->Data);
        DeleteNode(temp);
    }
    free(removeQueue);
}

Node* Peek(listQueue* frontQueue) {
    return frontQueue->Front;
}
void Enqueue(listQueue* Queue, Node* addNode) {
    if(Queue->size == 0) {
        Queue->Front = Queue->Rear = addNode;
    }
    else {
        Queue->Rear->Next = addNode;
        Queue->Rear = addNode;
    }
    Queue->size++;
}
Node* Dequeue(listQueue* Queue) {
    Node* tempNode = Queue->Front;

    if(Queue->size == 0) {printf("\n data is null"); return NULL;}
    else if(Queue->size == 1) {
        Queue->Front = NULL;
        Queue->Rear = NULL;
        Queue->size--;
    }
    else {
        Queue->Front = Queue->Front->Next;
        Queue->size--;
    }
    return tempNode;
}

