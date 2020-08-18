

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node {

	int data;
	struct Node* pNode;
};

struct Node pop_front(struct Node** headNode); //리스트 제일 앞에 원소 출력하고 삭제.
void push_back(struct Node* headNode, int); //리스트 제일 뒤에 원소 추가
//bool empty(struct Node* headNode); //리스트가 비어있으면 true 아니면 false 를
struct Node front(struct Node* headNode); //첫번째 원소를 반환
void printList(struct Node* headNode); //전체 리스트 값을 출력 ex)10 -> 20

int main(void) {
	struct Node nodeA = {10, 0},
					nodeB = {20, 0},
					nodeC = {30, 0}; // 이 세개의 노드를 연결하겠다.

	struct Node* headNode;
	struct Node* currNode;

	headNode = &nodeA; //linkedlist 와는 관계 없지만 초기값이 어딘지 추적하는 곳이다.
	currNode = headNode;


	nodeA.pNode = &nodeB;
	nodeB.pNode = &nodeC; //연결 완료우. 링크드리스트의 단점은 어디가 스타트인지 모른다는 것이다.

	printf("%d ->  %d ->  %d\n\n", nodeA.data, nodeB.data, nodeC.data);
	printf("%d ->  %d ->  %d\n\n", nodeA.data,										
											(*nodeA.pNode).data,
											(*(*nodeA.pNode).pNode).data);   // 두 프린트문은 같은 의미이다.

	printf("%d ->  %d ->  %d\n\n", nodeA.data,
											nodeA.pNode->data,
											(nodeA.pNode->pNode)->data); 	// 위처럼 보기 어려운 프린트문을 한결 깔끔하게 이렇게 바꿀수 있다.


	printf("%d ->  %d ->  %d\n\n", headNode->data,
											headNode->pNode->data,
											headNode->pNode->pNode->data);  //최종으로 이렇게 깔끔한 프린트문으로 바꿀수 있게 된다.
	

	printf("\n\n\n");
	currNode = headNode;
	printf("%d -> ", currNode->data); //nodeA.data

	currNode = currNode->pNode;
	printf("%d -> ", currNode->data); //nodeB.data
	currNode = currNode->pNode;
	printf("%d -> ", currNode->data); //nodeC.data  // 여기 세개의 프린트문을 --..>	
	printf("\n\n");

	currNode = headNode;

	while(currNode != NULL) { 						// 이렇게 while문으로 바꿀수 있다.
		printf("%d -> ", currNode->data);
		currNode = currNode->pNode;
	}
printf("\n\n");

	pop_front(&headNode);
	printf("%d", headNode->data);

	push_back(headNode, 40);

}


struct Node pop_front(struct Node** headNode) {
	struct Node newHeadNode = **headNode;
	*headNode = newHeadNode.pNode;

	return newHeadNode;

} //리스트 제일 앞에 원소 출력하고 삭제.


void push_back(struct Node* headNode, int data) {
	
	struct Node* currNode = headNode;
	while((currNode->pNode) != NULL) {
		currNode = currNode->pNode;
	}

	currNode->pNode = (struct Node*)malloc(sizeof(struct Node));
	currNode->pNode->data = data;
	currNode->pNode->pNode = NULL;

} //리스트 제일 뒤에 원소 추가

bool empty(struct Node* headNode) {

	if(headNode == NULL) return true;
	return false;

} //리스트가 비어있으면 true 아니면 false 를


//struct Node front(struct Node* headNode) {
//
//
//
//}
//첫번째 원소를 반환
//void printList(struct Node* headNode) {
//
//	struct Node* currNode = headNode;
//	while(currNode != NULL) {
//		printf(" %2d ", currNode->data);
///		currNode = currNode->pNode;
//		if(currNode != NULL) {
//			//return 
//		}
//	}


//} //전체 리스트 값을 출력 ex)10 -> 20
