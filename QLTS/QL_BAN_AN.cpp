#include "QL_BAN_AN.h"
#include<vector>
void QL_BAN_AN::Input()
{
	while (1)
	{
		system("cls");
		cout << "\n\t\t================ THEM BAN ===================";
		cout << "\n\t 1. Dang sach cac ban";
		cout << "\n\t 2. Them ban co khach";
		cout << "\n\t 0. Ket thuc";
		cout << "\n\t\t======================= END =================";
		int luachon = 0;
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		if (luachon == 0)
			break;
		else if (luachon == 1)
		{
			QL_BAN_AN::Output();
			system("pause");
		}
		else if (luachon == 2)
		{
			Ban_an x;
			x.Input();
			ds_ban_an.push_back(x);
		}
		else {
			cout << "\n\tBan nhap sai!Moi ban nhap lai!";
			system("pause");
		}

	}
}
void QL_BAN_AN::Output()
{
	cout << "\n\t\tDANH SACH CAC BAN DANG CO KHAC: ";
	for (int i = 0; i < ds_ban_an.size(); i++)
	{
		cout << "\n\t\t\tBan thu: " << i + 1;
		ds_ban_an[i].Output();
	}
}
QL_BAN_AN::QL_BAN_AN()
{
}
QL_BAN_AN::~QL_BAN_AN()
{
}