#pragma once
#include<iostream>
#include<string>
using namespace std;
class Nhan_vien
{
protected:
	string ma;
	string hoten;
	string ngaysinh;
	string diachi;
	string sodienthoai;
	int songaylamviec;
public:
	void Input(); //Nhập thông tin nhân viên
	void Output();//Xuất thông tin nhân viên

	Nhan_vien();
	~Nhan_vien();
};

