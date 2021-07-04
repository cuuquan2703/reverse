#include"qlsinhvien.h"

int main()
{
	List l;
	SinhVien sv; Ini(sv);
	char* maso = new char[9];
	LList_input(l);
	LList_print(l);
	cout << endl;

	cout << "Nhap MSSV can tim: "; cin >> maso;
	Node* k = searchNode(l, maso);
	Output(k->data);

	cout << endl;
	cout << "Danh sach sinh vien duoi diem 5: " << endl;
	find(l);
	
	cout << endl;
	cout << "Nhap thong tin sinh vien them vao danh sach: " << endl;
	Input(sv);
	insrt_sv(l, sv);
	cout << "Danh sach sau khi them: " << endl;
	LList_print(l);
	
	//delete maso;
	return 0;
}