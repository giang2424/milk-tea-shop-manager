#pragma once
#include"Nhan_vien.h"
#include"Nhan_vien_bao_ve.h"
#include"Nhan_vien_ke_toan.h"
#include"QL_nhan_su.h"
#include"Mon_an.h"
#include"QL_BAN_AN.h"
#include"Ban_an.h"
void menu()
{
	while (1)
	{
		system("cls");
		cout << "\n\t\t================ THEM BAN ===================";
		cout << "\n\t 1. QUAN LY NHAN SU";
		cout << "\n\t 2. QUAN LY BAN TRA SUA";
		cout << "\n\t 0. Ket thuc";
		cout << "\n\t\t======================= END =================";
		int luachon = 0;
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		if (luachon == 0)
			break;
		else if (luachon == 2)
		{
			QL_BAN_AN *x = new QL_BAN_AN;
			x->Input();
			delete x;
		}
		else if (luachon == 1)
		{
			QL_nhan_su* x = new QL_nhan_su;
			x->Input();
			delete x;
		}
		else {
			cout << "\n\tBan nhap sai!Moi ban nhap lai!";
			system("pause");
		}

	}
}
int main()
{
	menu();
	return 0;
}