#include "Mon_an.h"
void Mon_an::Input()
{
	cin.ignore();
	cout << "\n\tMa loai tra sua: ";
	getline(cin, mamonan);
	cout << "\n\tTen loai tra sua: ";
	getline(cin, tenmonan);
	cout << "\n\tGia ban: ";
	cin >> giamonan;
}
void Mon_an::Output()
{
	cout << "\n\tMa loai tra sua: " << mamonan;
	cout << "\n\tTen loai tra sua: " << tenmonan;
	cout << "\n\tGia ban: " << giamonan;
}
Mon_an::Mon_an()
{
}
Mon_an::~Mon_an()
{

}