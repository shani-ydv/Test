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
}
