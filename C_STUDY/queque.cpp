#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    char* data;
    struct Node* next;
}Node;
typedef struct listQueue{
    int size;
    Node* front;
    Node* rear;
}Queue;

void CreateQueue(listQueue** Queue);
Node* createNode(char* Data);
Node* Peek(listQueue* front_of_Queue);
void deleteNode(Node* removeNode);
void EnQueue(listQueue* Queue, Node* addNode);
Node* DeQueue(listQueue* Queue);
void deleteQueue(listQueue* removeQueue);

int main(void) {

    int i;
    listQueue* Queue;
    CreateQueue(&Queue);


    EnQueue(Queue, createNode("aaa"));
    EnQueue(Queue, createNode("bbb"));
    EnQueue(Queue, createNode("ccc"));
    EnQueue(Queue, createNode("ddd"));

    Node* temPeek = Peek(Queue);
    printf("peek --> %s", temPeek->data);
    
    printf("\n--Current Queue--[size::%d]\n\n", Queue->size);
    printf("\nfront is :: [%s]\n",Queue->front->data);
    printf("\nrear is :: [%s]\n\n",Queue->rear->data);

    Node* hores = Queue->front;
    for(i=0; i<(Queue->size); i++) {
        printf("hores-->front-->data --->>> %s\n", hores->data);
        hores = hores->next;
    }


    hores = DeQueue(Queue);
    hores = DeQueue(Queue);

    printf("\n--Current Queue--[size::%d]\n\n", Queue->size);
    printf("\nfront is :: [%s]\n",Queue->front->data);
    printf("\nrear is :: [%s]\n\n",Queue->rear->data);


    hores = Queue->front;
    for(i=0; i<(Queue->size); i++) {
        printf("DeQueue after hores--->front->data :----->>>>>>> %s\n", hores->data);
        hores= hores->next;
    }

    hores = DeQueue(Queue);
    hores = DeQueue(Queue);
    deleteQueue(Queue);

    printf("\n\n\nBYBY");
    return 0;
}

void CreateQueue(listQueue** Queue) {
    (*Queue) = (listQueue*)malloc(sizeof(listQueue));
    (*Queue)->front = NULL;
    (*Queue)->rear = NULL;
    (*Queue)->size = 0;
}
Node* createNode(char* Data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = (char*)malloc(strlen(Data));
    newNode->next = NULL;
    strcpy(newNode->data, Data);
    return newNode;
}
Node* Peek(listQueue* front_of_Queue) {return front_of_Queue->front;}
void deleteNode(Node* removeNode) {
    free(removeNode->data);
    free(removeNode);
}

void EnQueue(listQueue* Queue, Node* addNode) {
    if(Queue->size == 0) {
        Queue->front = addNode;
        Queue->rear = addNode;
        printf("\ninit front!!!");
    }
    else{
        Queue->rear = Queue->rear->next;
        printf("\nnext --> %s\n", Queue->rear->next->data);
        Queue->rear = addNode;
        printf("rear --> %s\n", Queue->rear->data);
    }

    Queue->size++;
}
Node* DeQueue(listQueue* Queue) {

    Node* temp = Queue->front;
    if(Queue->size == 0) {printf("No!!!!\n");return NULL;}
    else if(Queue->size == 1) {Queue->front = Queue->rear = NULL; Queue->size--;}
    else {
        Queue->front = Queue->front->next;
        Queue->size--;
        printf("\n DeQ ----> Queue->front = Queue->front->next %s\n", Queue->front->next->data);
    }

    return temp;
}
void deleteQueue(listQueue* removeQueue) {
    int cnt = removeQueue->size;

    while(cnt-- != 0) {
        Node* temp = DeQueue(removeQueue);
        printf("\n DeQueued node data -->>> %s\n", temp->data);
        deleteNode(temp);
    }
    free(removeQueue);
}



