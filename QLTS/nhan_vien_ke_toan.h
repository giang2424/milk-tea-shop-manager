#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Nhan_vien.h"
class Nhan_vien_ke_toan : Nhan_vien
{
private:
public:
	void Input();
	void Output();
	string getter_hoten()
	{
		return hoten;
	}
	string getter_ma()
	{
		return ma;
	}
	int Tinh_tien_luong();
	Nhan_vien_ke_toan();
	~Nhan_vien_ke_toan();
};



