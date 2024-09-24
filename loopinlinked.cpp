#include<iostream>
#include<map>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(int d)
	{
		this->data=d;
		this->next=NULL;
	}
};
void insertAtTail(Node* &tail,int d)
{
	Node* temp = new Node(d);
	tail->next = temp;
	tail=temp;
}
void print(Node* head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp= temp->next;
	}cout<<endl;
}
bool detectLoop(Node* head)
{
	if(head==NULL)
	return false;
	Node* temp = head;
	map<Node* ,bool> visited;
	while(temp!=NULL )
	{
		if(visited[temp]==true){
			
			cout<<"Present at element :  "<<temp->data<<endl;
			return true;
				}
		visited[temp]=true;
		temp=temp->next;
	}
	return false;
	
}
Node* floyd(Node* head)
{
	if(head==NULL)
	return NULL;
	Node* slow = head;
	Node* fast = head;
	
	while(slow!=NULL && fast!=NULL)
	{
		fast=fast->next;
		if(fast!=NULL)
		{
			fast=fast->next;
		}
		slow=slow->next;
		
		if(slow==fast)
		return slow;
	}
	return NULL;
}
Node* startingNode(Node* head)
{
	if(head==NULL)
	return NULL;
	
	Node* intersection =floyd(head);
	Node* slow = head;
	while(slow!=intersection)
	{
		slow=slow->next;
		intersection = intersection->next;
	}
	return slow;
}
void removeLoop(Node* head)
{
	Node* startingofloop = startingNode(head);
	Node* temp = startingofloop;
    while(temp->next!=startingofloop)
	{
		temp=temp->next;
		}	
		temp->next = NULL;
}
int main()
{
	Node* node1 =new Node(10);
	Node* tail = node1;
	Node* head = node1;
	insertAtTail(tail,20);
	print(head);
	insertAtTail(tail,30);
	print(head);
    insertAtTail(tail,40);
	print(head);
    tail->next = head->next;
    
	if(detectLoop(head))
	{
		cout<<"Loop is present"<<endl;
	}
	else
	   cout<<"Loop is not present"<<endl;
	Node* intersection = floyd(head) ;
	cout<<"intersect at : "<< intersection->data<<endl;
	Node* starting = startingNode(head);
	cout<<"Loop starts at : "<<starting->data<<endl;
	removeLoop(head);
	print(head);
	   
}
