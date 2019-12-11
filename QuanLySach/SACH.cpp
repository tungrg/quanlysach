#include "SACH.h"

SACH::SACH()
{
	tenSach = "";
	maSach = "";
	giaSach = 0;
	tacGia = "";
	nhaXuatBan = "";
	khoaSach = 0;
}

void SACH::fXuatSach()
{
	cout << tenSach << endl;
	cout << maSach << endl;
	cout << giaSach << endl;
	cout << tacGia << endl;
	cout << nhaXuatBan << endl;
}

const SACH& SACH::operator=(const SACH& A)
{
	tenSach = A.tenSach;
	maSach = A.maSach;
	giaSach = A.giaSach;
	tacGia = A.tacGia;
	nhaXuatBan = A.nhaXuatBan;
	khoaSach = A.khoaSach;
	return A;
}
