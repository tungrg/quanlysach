#include "KhachHang.h"

void KhachHang::fGhifileHoaDon()
{
	ofstream fileOut("HoaDon.txt",ofstream::out, ofstream::ate);
	fileOut << xyz.ID << endl;
	for (auto i = KhachHoaDon.DanhSach.begin(); i != KhachHoaDon.DanhSach.end(); i++)
	{
		fileOut << (*i).tenSach << "*" << (*i).giaTien << "=" << (*i).fThanhTien() << endl;
	}
	fileOut << ";";
}
