#pragma once
#include "QL_nhan_su.h"
#include"Nhan_vien_bao_ve.h"
#include"nhan_vien_ke_toan.h"
#include"Nhan_vien_phuc_vu.h"
#include"Nhan_vien_ke_toan.h"
#include<vector>
void QL_nhan_su::Input()
{
	while (1)
	{
		system("cls");
		cout << "\n\t\t================ QUAN LI NHAN SU ===================";
		cout << "\n\t 1. Dang sach nhan vien: ";
		cout << "\n\t 2. Them nhan vien phuc vu";
		cout << "\n\t 3. Them nhan vien bao ve";
		cout << "\n\t 4. Them nhan vien ke toan";
		cout << "\n\t 5. Xoa nhan vien phuc vu";
		cout << "\n\t 6. Xoa nhan vien bao ve";
		cout << "\n\t 7. Xoa nhan vien ke toan";
		cout << "\n\t 8. Thong ke bang luong nhan vien";
		cout << "\n\t 9. Tinh tong tien luong nhan vien";
		cout << "\n\t 0. Ket thuc";
		cout << "\n\t\t======================= END ========================";
		int luachon;
		cout << "\n\tNHAP LUA CHON CUA BAN: ";
		cin >> luachon;
		if (luachon == 0)
			break;
		else if (luachon == 1)
		{
			QL_nhan_su::Output();
			system("pause");
		}
		else if (luachon == 2)
		{
			Nhan_vien_phuc_vu x;
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN PHUC VU\n";
			x.Input();
			ds_Nhan_vien_phuc_vu.push_back(x);
		}
		else if (luachon == 3)
		{
			Nhan_vien_bao_ve x;
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN BAO VE\n";
			x.Input();
			ds_Nhan_vien_bao_ve.push_back(x);
		}
		else if (luachon == 4)
		{
			Nhan_vien_ke_toan x;
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN KE TOAN\n";
			x.Input();
			ds_Nhan_vien_ke_toan.push_back(x);
		}
		else if (luachon == 5)
		{
			string x;
			cin.ignore();
			cout << "\n\tNhap ma so nhan vien phuc vu muon xoa: ";
			getline(cin, x);
			for (int i = 0; i < ds_Nhan_vien_phuc_vu.size(); i++)
			{
				if (x == ds_Nhan_vien_phuc_vu[i].getter_ma())
					ds_Nhan_vien_phuc_vu.erase(ds_Nhan_vien_phuc_vu.begin() + i);
			}
		}
		else if (luachon == 6)
		{
			string x;
			cin.ignore();
			cout << "\n\tNhap ma so nhan vien bao ve muon xoa: ";
			getline(cin, x);
			for (int i = 0; i < ds_Nhan_vien_bao_ve.size(); i++)
			{
				if (x == ds_Nhan_vien_bao_ve[i].getter_ma())
					ds_Nhan_vien_bao_ve.erase(ds_Nhan_vien_bao_ve.begin() + i);
			}
		}
		else if (luachon == 7)
		{
			string x;
			cin.ignore();
			cout << "\n\tNhap ma so nhan vien ke toan muon xoa: ";
			getline(cin, x);
			for (int i = 0; i < ds_Nhan_vien_ke_toan.size(); i++)
			{
				if (x == ds_Nhan_vien_ke_toan[i].getter_ma())
					ds_Nhan_vien_ke_toan.erase(ds_Nhan_vien_ke_toan.begin() + i);
			}
		}
		else if (luachon == 8)
		{
			QL_nhan_su::Thong_ke_bang_luong_nhan_vien();
			system("pause");
		}
		else if(luachon == 9)
		{
			cout << "\n\tTONG TIEN LUONG CUA TAT CA NHAN VIEN LA: "<<QL_nhan_su::Tinh_tong_tien_luong();
			system("pause");
		}
		else {
			cout << "\n\n\t\tKhong co lua chon do! Moi ban nhap lai!\n";
			system("pause");
		}
	}
}
void QL_nhan_su::Thong_ke_bang_luong_nhan_vien()
{
	cout << "\n\n\t\t\t DANH SACH BANG LUONG NHAN VIEN\n";
	cout << "\n\n\t\t DANH SACH NHAN VIEN PHUC VU\n";
	for (int i = 0; i < ds_Nhan_vien_phuc_vu.size(); i++)
	{
		cout << "\n\t\t" <<"Ma nhan tien: "<< ds_Nhan_vien_phuc_vu[i].getter_ma()<<"\tTen nhan vien:  " << ds_Nhan_vien_phuc_vu[i].getter_hoten() <<"\tTien luong: "<< ds_Nhan_vien_phuc_vu[i].Tinh_tien_luong();
	}
	cout << "\n\n\t\t DANH SACH NHAN VIEN BAO VE\n";
	for (int i = 0; i < ds_Nhan_vien_bao_ve.size(); i++)
	{
		cout << "\n\t\t" << "Ma nhan tien: " << ds_Nhan_vien_bao_ve[i].getter_ma() << "\tTen nhan vien:  " << ds_Nhan_vien_bao_ve[i].getter_hoten() << "\tTien luong: " << ds_Nhan_vien_bao_ve[i].Tinh_tien_luong();
	}
	cout << "\n\n\t\t DANH SACH NHAN VIEN KE TOAN\n";
	for (int i = 0; i < ds_Nhan_vien_ke_toan.size(); i++)
	{
		cout << "\n\t\t" << "Ma nhan tien: " << ds_Nhan_vien_ke_toan[i].getter_ma() << "\tTen nhan vien:  " << ds_Nhan_vien_ke_toan[i].getter_hoten() << "\tTien luong: " << ds_Nhan_vien_ke_toan[i].Tinh_tien_luong();
	}
}
int QL_nhan_su::Tinh_tong_tien_luong()
{
	int t = 0;
	for (int i = 0; i < ds_Nhan_vien_phuc_vu.size(); i++)
	{
		t += ds_Nhan_vien_phuc_vu[i].Tinh_tien_luong();
	}
	for (int i = 0; i < ds_Nhan_vien_bao_ve.size(); i++)
	{
		t += ds_Nhan_vien_bao_ve[i].Tinh_tien_luong();
	}
	for (int i = 0; i < ds_Nhan_vien_ke_toan.size(); i++)
	{
		t += ds_Nhan_vien_ke_toan[i].Tinh_tien_luong();
	}
	return t;
	system("pause");
}
void QL_nhan_su::Output()
{
	cout << "\n\n\t\t DANH SACH NHAN VIEN PHUC VU\n";
	for (int i = 0; i < ds_Nhan_vien_phuc_vu.size(); i++)
	{
		cout << "\n\t\t Nhan vien phuc vu thu " << i+1 << ":\n";
		ds_Nhan_vien_phuc_vu[i].Output();
	}
	cout << "\n\n\t\t DANH SACH NHAN VIEN BAO VE\n";
	for (int i = 0; i < ds_Nhan_vien_bao_ve.size(); i++)
	{
		cout << "\n\t\t Nhan vien bao ve thu " << i + 1 << ":\n";
		ds_Nhan_vien_bao_ve[i].Output();
	}
	cout << "\n\n\t\t DANH SACH NHAN VIEN KE TOAN\n";
	for (int i = 0; i < ds_Nhan_vien_ke_toan.size(); i++)
	{
		cout << "\n\t\t Nhan vien ke toan " << i + 1 << ":\n";
		ds_Nhan_vien_ke_toan[i].Output();
	}
	system("pause");
}
QL_nhan_su::QL_nhan_su()
{
}
QL_nhan_su::~QL_nhan_su()
{
}




