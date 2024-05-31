#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}

	void insertattail(node*& tail, int d)
	{
		node* temp = new node(d);
		
	    temp->next = tail->next;
		tail->next = temp;
		tail = temp;
	}

	void display(node* tail)
	{
		node* temp = tail->next;
		do
		{
			cout << temp->data << "->";
			temp = temp->next;
		} while (temp != tail->next);
		cout << "(head)";
	}
};

void main()
{
	node* node1 = new node(1);
	node* node2 = new node(2);
	node* node3 = new node(3);
	node* node4 = new node(4);

	node* head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node1;
	node* tail = node4;

	head->insertattail(tail , 5);
	node1->display(tail);
	cout << endl;
}