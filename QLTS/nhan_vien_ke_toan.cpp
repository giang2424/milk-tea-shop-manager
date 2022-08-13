#include"Nhan_vien_ke_toan.h"
void Nhan_vien_ke_toan::Input()
{
	Nhan_vien::Input();
}
void Nhan_vien_ke_toan::Output()
{
	Nhan_vien::Output();
	cout << " Tien luong: " << Tinh_tien_luong();
}
int Nhan_vien_ke_toan::Tinh_tien_luong()
{
	return songaylamviec*200000;
}
Nhan_vien_ke_toan::Nhan_vien_ke_toan()
{
}
Nhan_vien_ke_toan::~Nhan_vien_ke_toan()
{
}
