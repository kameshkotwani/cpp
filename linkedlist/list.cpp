#include<iostream>
using namespace std;

struct ListNode{
	int data;
	ListNode *next;
	ListNode* tail;
	ListNode(int d) : data(d), next(nullptr),tail(nullptr){}
};

void traverse(ListNode* head){
	ListNode* trav=head;
	while(trav){
		std::cout<<trav->data<<" ";
		trav=trav->next;
	}
}


//Insert a node at the end of the list
	ListNode* insert(ListNode* head, int data){
	ListNode* newNode=new ListNode(data);
	if(head==nullptr){
		head=newNode;
	}
	else{
	ListNode* trav=head;
	while(trav->next){
		trav=trav->next;
	}
	trav->next=newNode;
	}
	return head;

}

int main(int argc, char const *argv[])
{
	ListNode* head=nullptr;
	for(int i=0;i<5;i++){
		head = insert(head,i);
	}
	traverse(head);

	return 0;
}
