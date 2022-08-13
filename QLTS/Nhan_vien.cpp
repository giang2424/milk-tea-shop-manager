#include"Nhan_vien.h"
void Nhan_vien::Input()
{
	cin.ignore();
	cout << "\n\tMa so: ";
	getline(cin, ma);
	cout << "\n\tHo ten: ";
	getline(cin, hoten);
	cout << "\n\tNgay sinh (dd//mm//yyyy): ";
	getline(cin, ngaysinh);
	cout << "\n\tSo dien thoai(+84): ";
	getline(cin, sodienthoai);
	cout << "\n\tDia chi: ";
	getline(cin, diachi); 
	cout << "\n\tSo ngay lam viec: ";
	cin >> songaylamviec;
}
void Nhan_vien::Output()
{
	cout << "\n\tMa so: " << ma;
	cout << "\n\tHo ten: " << hoten;
	cout << "\n\tNgay sinh: " << ngaysinh;
	cout << "\n\tSdt: " << sodienthoai;
	cout << "\n\tDia chi: " << diachi;
	cout << "\n\tSo ngay lam viec: " << songaylamviec;
} 
Nhan_vien::Nhan_vien()
{
}
Nhan_vien::~Nhan_vien()
{
}