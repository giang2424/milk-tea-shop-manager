#include"Nhan_vien_phuc_vu.h"
void Nhan_vien_phuc_vu::Input()
{
	Nhan_vien::Input();
}
void Nhan_vien_phuc_vu::Output()
{
	Nhan_vien::Output();
	cout << " Tien luong: " << Tinh_tien_luong();
}
int Nhan_vien_phuc_vu::Tinh_tien_luong()
{
	return songaylamviec * 150000;
}
Nhan_vien_phuc_vu::Nhan_vien_phuc_vu()
{
}
Nhan_vien_phuc_vu::~Nhan_vien_phuc_vu()
{
}