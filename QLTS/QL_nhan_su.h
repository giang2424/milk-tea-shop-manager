#pragma once
#include"Nhan_vien_bao_ve.h"
#include"nhan_vien_ke_toan.h"
#include"Nhan_vien_phuc_vu.h"
#include<vector>
class QL_nhan_su
{
private:
	vector<Nhan_vien_bao_ve> ds_Nhan_vien_bao_ve;
	vector<Nhan_vien_phuc_vu> ds_Nhan_vien_phuc_vu;
	vector<Nhan_vien_ke_toan> ds_Nhan_vien_ke_toan;
public:
	void Input();
	void Output();
	int Tinh_tong_tien_luong();
	void Thong_ke_bang_luong_nhan_vien();
	QL_nhan_su();
	~QL_nhan_su();

};

