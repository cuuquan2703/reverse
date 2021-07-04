#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void init(Node*& head)
{
	head = NULL;
}

Node* createnode(int key)
{
    Node* k = new Node;
    k->data = key;
    k->next = NULL;
    return k;
}

void addLast(Node*& Head, Node* p)
{
	Node* tem = Head;
	if ( Head == NULL)
	{
		Head = p;
	}
	else
	{
		while (tem->next != NULL) tem = tem->next;
		tem->next = p;
	};
}

void LList_input(Node*& Head)
{
	int n;
	int key = 0;
	cout << "Nhap so node: ";
	cin >> n;
	init(Head);
	for (int i = 0; i < n; i++)
	{
		cout << "NODE " << i + 1 << " : " ;
		Node* tem;
		cin >> key;
		tem = createnode(key);
		addLast(Head, tem);
	}

}
void Output(Node* Head)
{
	Node* temp = Head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
void reverse1(Node*& head)
{
	Node* current = head;
	Node* prev = NULL, * next = NULL;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
Node* reverse(Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node* rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

int main()
{
	Node* head;
	LList_input(head);
	cout << "Danh sach lien ket ban dau: "; Output(head); cout << endl;
	head=reverse(head);//Recursion
	cout << "Danh sach lien ket dao nguoc( Recursion ): "; Output(head); cout << endl;
	reverse1(head);//Looping
	cout << "Danh sach lien ket dao nguoc( su dung Looping ): "; Output(head); cout << endl;
	return 0;
}