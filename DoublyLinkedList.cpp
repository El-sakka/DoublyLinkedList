/*Doubly linked List */
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node *prev;
};
//head Node
Node *head = NULL;

//Create a newNode
Node *GetNewNode(int x) {
	Node *NewNode = new Node();
	NewNode->data = x;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	return NewNode;
}

// insert At head
void InsertAtHead(int x) {
	Node *NewNode = GetNewNode(x);
	if (head == NULL) {
		head = NewNode;
		return;
	}
	head->prev = NewNode;
	NewNode->next = head;
	head = NewNode;
}

// Insert At Tail
void InsertAtTail(int x) {
	Node *NewNode = GetNewNode(x);
	if (head == NULL) {
		head = NewNode;
		return;
	}
	Node *temp = head;
	while (temp->next != NULL) //loop at end
		temp = temp->next;
	temp->next = NewNode;
	NewNode->prev = temp;
}

//Print all element in linkedlist in forword traversal order
void Print() {
	Node *temp = head;
	cout<<"Forword : ";
	while(temp !=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}
//print all element in linkedlist in reverse traversal order
void Reverse(){
	Node *temp = head;
	// loop to end
	while(temp->next != NULL)
		temp = temp->next;
	cout<<"Reverse : ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
	cout<<"\n";
}

int main() {
	int x , n;
	cout<<"How Many Number you want to insert \n";
	cin>>x;
	for(int i=0;i<x;i++){
		cout<<"Enter your Number : ";
		cin>>n;
		//InsertAtHead(n);
		InsertAtTail(n);
		Print();
		Reverse();
	}
	return 0;
}
