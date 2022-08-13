#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Nhan_vien.h"
class Nhan_vien_bao_ve:public Nhan_vien
{
private:
public:
	void Input(); //Nhập thông tin nhân viên bảo vệ
	void Output();//Xuất thông tin nhân viên bảo vệ
	string getter_hoten()
	{
		return hoten;
	}
	string getter_ma()
	{
		return ma;
	}
	int Tinh_tien_luong();
	Nhan_vien_bao_ve();
	~Nhan_vien_bao_ve();

};

