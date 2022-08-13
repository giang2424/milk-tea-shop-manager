#include "Ban_an.h"
#include"Mon_an.h"
#include<vector>
void Ban_an::Input()
{
	cin.ignore();
	cout << "\n\tMa ban an: ";
	getline(cin, mabanan);
	cout << "\n\tTen ban an: ";
	getline(cin, tenbanan);
	while (1)
	{
		system("cls");
		cout << "\n\t\t================ THEM MON AN VAO BAN ===================";
		cout << "\n\t 1. Dang sach cac loai tra sua: ";
		cout << "\n\t 2. Them loai tra sua";
		cout << "\n\t 0. Ket thuc";
		cout << "\n\t\t======================= END ========================";
		int luachon = 0;
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		if (luachon == 0)
			break;
		else if (luachon == 1)
		{
			cout << "\n\t\tDANH SACH CAC LOAI TRA SUA DA ORDER: ";
			for (int i = 0; i < ds_Mon_an.size(); i++)
			{
				cout << "\n\t\t\tLoai thu: " << i+1;
				ds_Mon_an[i].Output();
			}
			system("pause");
		}
		else if (luachon == 2)
		{
			Mon_an x;
			x.Input();
			ds_Mon_an.push_back(x);
		}

	}
}
void Ban_an::Output()
{
	cout << "\n\tMa ban: " << mabanan;
	cout << "\n\tTen ban: " << tenbanan;
	cout << "\n\t\tXUAT HOA DON: ";
	for (int i = 0; i < ds_Mon_an.size(); i++)
	{
		cout << "\n\t\t\tLoai thu: " << i + 1;
		ds_Mon_an[i].Output();
	}
	cout << "\n\n\tTONG TIEN THANH TOAN: " << Xuat_hoa_don_cho_ban();

}
int Ban_an::Xuat_hoa_don_cho_ban()
{
	int t = 0;
	for (int i = 0; i < ds_Mon_an.size(); i++)
		t += ds_Mon_an[i].getter();
	return t;
}
Ban_an::Ban_an()
{
}
Ban_an::~Ban_an()
{
}