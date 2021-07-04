#pragma once
#ifndef QLSINHVIEN_H
#define QLSINHVIEN_H
#include "SinhVien.h"
// node of Sinh Vien
struct Node {
	SinhVien data;
	Node* Next;
};
// List of sv
struct List {
	Node* Head;
	Node* Tail;
};
// Create a new node of LList
Node* createNode();
// Khoi tao ds
void init(List& l);
//Insert node into LList
void addLast(List& L, Node* p);
//Input LList
void LList_input(List& L);
//print LList
void LList_print(List L);
// Search node in LList
// Tim Sinh vien co maso da cho
Node* searchNode(List L, char* maso);
void find(List L);
void insert_node_before_node(List& l, Node* after, Node* insrt);
void insrt_sv(List& l, SinhVien sv);
#endif

