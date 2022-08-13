#include"Nhan_vien_bao_ve.h"
void Nhan_vien_bao_ve::Input()
{
	Nhan_vien::Input();
}
void Nhan_vien_bao_ve::Output()
{
	Nhan_vien::Output();
	cout << " Tien luong: " << Tinh_tien_luong();
}
int Nhan_vien_bao_ve::Tinh_tien_luong()
{
	return songaylamviec*110000;
}
Nhan_vien_bao_ve::Nhan_vien_bao_ve()
{
}
Nhan_vien_bao_ve::~Nhan_vien_bao_ve()
{
}