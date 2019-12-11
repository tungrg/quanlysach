#include "HoaDon.h"

int HoaDon::fThanhTien()
{
	return giaTien * soLuong;
}

void HoaDon::fXuatHoaDon()
{
	cout << tenSach << " * " << soLuong << " = " << fThanhTien() << endl;
}
