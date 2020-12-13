#include <stdio.h>
#include <stdlib.h>
#include <string.h>


////////////////////////////////////////////////////////////////////////////////-------------------->>>>> init sources..
typedef struct qNode {

    char* Data;
    struct qNode* Next;
}Node;

struct listQueue{
    Node* Front;
    Node* Rear;
    int size;
};

void createQueue(listQueue** Queue) { // init Queue

    (*Queue) = (listQueue*)malloc(sizeof(listQueue));
    (*Queue)->Front=NULL;
    (*Queue)->Rear=NULL;
    (*Queue)->size=0;
}

Node* createNode(char* Data) {    //data sizing Node

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->Data = (char*)malloc(strlen(Data) + 1);
    newNode->Next=NULL;


    //data insert
    strcpy(newNode->Data, Data);

    return newNode;
}

void deleteNode(Node* removeNode) {     //delete Node data sources

    free(removeNode->Data);
    free(removeNode);
}

///////////////////////////////////////////////////////////////////////////////
//

Node* Peek(listQueue* Queue) {   // information Front Data
    return Queue->Front;
}
void Enqueue(listQueue* Queue, Node* newNode) {
    //is empty Queue
    if(Queue->size==0) {
        Queue->Front = newNode;
        Queue->Rear = newNode;
    }

    // if Queue is not empty ==> 1 or more data inside queue
    else {
        Queue->Rear->Next = newNode;
        Queue->Rear = newNode;
    }

    Queue->size++;
    
}

Node* Dequeue(listQueue* Queue) {
    Node* tempNode = Queue->Front; // Front data ---> tempNode +

    if(Queue->size==0) {printf("\ndon't call me");return NULL;} // size == 0 
    else if(Queue->size == 1) {Queue->Front=NULL; Queue->Rear=NULL; Queue->size--;} // size == 1
    else { // size > 1
        Queue->Front = Queue->Front->Next;
        Queue->size--;
    }

    return tempNode;
}


void deleteQueue(listQueue* Queue) {
    int count = Queue->size;

    while(count-- != 0) {

        Node* temp = Dequeue(Queue);
        printf("\n Dequeued node data :: %s\n", temp->Data);
        deleteNode(temp);
    }
    free(Queue);
}

int main(void) {

    int i;
    listQueue* Queue;

    createQueue(&Queue);
    Enqueue(Queue, createNode("a"));
    Enqueue(Queue, createNode("b"));
    Enqueue(Queue, createNode("c"));
    Enqueue(Queue, createNode("d"));

    Node* temp1 = Peek(Queue);
    printf("%s --> this is at front of the queue\n", temp1->Data);

    printf("\n--Current Queue--[size::%d]\n\n", Queue->size);
    printf("\nfront is :: [%s]\n",Queue->Front->Data);
    printf("\nrear is :: [%s]\n\n",Queue->Rear->Data);

    Node* hores = Queue->Front;

    for(i=0; i<(Queue->size); i++) {
        printf("hores->Front->Data :: %s\n", hores->Data);
        hores = hores->Next;
    }

    hores = Dequeue(Queue);
    hores = Dequeue(Queue);

    printf("\n--Current Queue--[size::%d]\n\n", Queue->size);
    hores = Queue->Front;
    for(i=0; i<(Queue->size); i++) {
        printf("hores -> Front -> Data :: %s\n", hores->Data);
        hores = hores->Next;
    }


    hores = Dequeue(Queue);
    hores = Dequeue(Queue);
    deleteQueue(Queue);
    
    printf("\n Queue has been completely freed\n\n");
    return 0;
}
