#include "qlsinhvien.h"

void Ini(SinhVien& sv)
{
};

void Input(SinhVien& sv)
{
	cin.ignore();
	cout << "Ho ten: "; cin.get(sv.hoten, 30);
	cin.ignore();
	cout << "Ma so: "; cin.get(sv.maso, 9);
	cin.ignore();
	cout << "Ngay sinh: "; cin.get(sv.ngaysinh, 11);
	cout << "Diem: "; cin >> sv.diem;
	cout << endl;
}

void Output(SinhVien sv)
{
	cout << " ________________________________________________________________________________________" << endl;
	cout << "|  STT  |         Ho va ten         |    Ngay sinh   |    Ma sinh vien   |     Diem      |" << endl;
	cout << "|_______|___________________________|________________|___________________|_______________|" << endl;
	cout << "|" << "   " << "#" << "   |" << setw(20) << sv.hoten << "       |" << "   " << sv.ngaysinh
		<< "   |" << setw(14) << sv.maso << "     |" << setw(8) << sv.diem << "       |" << endl;
	cout << endl; 
}

void init(List& l)
{
	l.Head = NULL;
}

Node* createNode()
{
	Node* k;
	k = new Node;
	k->Next = NULL;
	return k;
}

void addLast(List& l, Node* p)
{
	Node* tem = l.Head;
	if (l.Head == NULL)
	{
		l.Head = p;
		l.Tail = p;
	}
	else
	{
		while (tem->Next != NULL) tem = tem->Next;
		tem->Next = p;
		l.Tail = p;
	};
}

void LList_input(List& L)
{
	int n;
	SinhVien sv;
	cout << "Nhap so node: ";
	cin >> n;
	init(L);
	for (int i = 0; i < n; i++)
	{
		cout << "Sinh vien thu " << i + 1 << " : " << endl;
		Node* tem;
		Input(sv);
		tem = createNode();
		tem->data = sv;
		addLast(L, tem);
	}
	
}

void LList_print(List l)
{
	int a = 1;
	cout << " ________________________________________________________________________________________" << endl;
	cout << "|  STT  |         Ho va ten         |    Ngay sinh   |    Ma sinh vien   |     Diem      |" << endl;
	cout << "|_______|___________________________|________________|___________________|_______________|" << endl;
	for (Node* i = l.Head; i; i = i->Next)
	{
		cout << "|" << "   " << a << "   |" << setw(20) << i->data.hoten << "       |" << "   " << i->data.ngaysinh
			<< "   |" << setw(14) << i->data.maso << "     |" << setw(8) << i->data.diem << "       |" << endl;
		a++;
	}
}

Node* searchNode(List l, char* maso)
{
	Node* tem = l.Head;
	Node* k = NULL;
	while (tem->Next != NULL)
	{
		if (strcmp(tem->data.maso, maso) == 0)
			k = tem;
		tem = tem->Next;
	}
	return k;
}

void find(List L)
{
	Node* k = L.Head;
	while (k  != NULL)
	{
		if (k->data.diem < 5) Output(k->data);
		k = k->Next;
	}
}

void insert_node_before_node(List& l, Node* after, Node* insrt)
{
	Node* temp = l.Head;
	while (temp->Next != after)
	{
		temp = temp->Next;
	};
	insrt->Next = temp->Next;
	temp->Next = insrt;
}

void insrt_sv(List& l, SinhVien sv)
{
	Node* temp = l.Head;
	Node* k = createNode();
	Input(sv);
	k->data = sv;
	while (strcmp(temp->data.maso,k->data.maso) == 1)
		temp = temp->Next;
	insert_node_before_node(l, temp, k);
}