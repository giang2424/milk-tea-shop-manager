#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Nhan_vien.h"
class Nhan_vien_phuc_vu : Nhan_vien
{
private:
public:
	void Input();
	void Output();
	int Tinh_tien_luong();
	string getter_hoten()
	{
		return hoten;
	}
	string getter_ma()
	{
		return ma;
	}
	Nhan_vien_phuc_vu();
	~Nhan_vien_phuc_vu();
};

