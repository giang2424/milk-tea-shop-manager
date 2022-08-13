#pragma once
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include"Mon_an.h"
class Ban_an
{
private:
	string mabanan;
	string tenbanan;
	vector<Mon_an>ds_Mon_an;
public:
	void Input();
	void Output();
	int Xuat_hoa_don_cho_ban();
	Ban_an();
	~Ban_an();
};

