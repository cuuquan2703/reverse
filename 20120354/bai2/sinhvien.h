#pragma once
#ifndef SINHVIEN_H
#define SINHVIEN_H
#include<iostream>
#include<iomanip>
using namespace std;
struct SinhVien
{
	char maso[9];
	char hoten[30];
	char ngaysinh[11];
	double diem;
};
void Ini(SinhVien& sv);
void Input(SinhVien& sv);
void Output(SinhVien sv);
#endif // !SINHVIEN_H

