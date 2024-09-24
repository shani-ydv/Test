#include<iostream>
using namespace std;
class Node{
	
	public:
		int data;
		Node* next;
    Node(int data)
    {
    	this->data =data;
    	this->next = NULL;
	}
	~Node()
	{
		
		int value = this->data;
		if(this->next!=NULL)
		{
			delete next;
			this->next=NULL;
		}
	}
};
void insertAtHead(Node* &head,int d)
{
 
 Node* temp = new Node(d);
 temp->next=head;
 head=temp;  
}
void print(Node* head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
insertAtTail(Node* &tail,int d)
{
	Node* temp = new Node(d);
	tail->next = temp;
	tail = tail->next;
	
}
void insertAtPosition(Node* &tail,Node* &head,int position,int d)
{
	if(position==1)
	{
		insertAtHead(head,d);
		return;
	}
	Node* temp = head;
	int cnt=1;
	while(cnt<position-1)
	{
		temp = temp->next;
		cnt++;
	}
	if(temp->next==NULL)
	{
		insertAtTail(tail,d);
		return;
	}
	Node* Nodetoinsert  = new Node(d);
	Nodetoinsert->next = temp->next;
	temp->next = Nodetoinsert;	
}
void deleteNode(Node* &head,int position)
{
	if(position==1)
	{
		Node* temp = head;
		head = head -> next;
		
		temp->next = NULL;
		delete temp;
	}
	else
	{
		int cnt = 1;
		Node* prev = NULL;
		Node* curr = head;
		while(cnt<position)
		{
			prev = curr;
			curr = curr->next;
			cnt++;
		}
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;	
	}

}
int main()
{
	Node* node1 = new Node(10);
//	cout<<node1->data<<endl;
    Node* head  = node1;
    
    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtPosition(tail,head,4,22);
    print(head);
    cout<<"head = "<<head->data<<"  "<<"tail = "<<tail->data<<endl;
    deleteNode(head,4);
    print(head);

}
