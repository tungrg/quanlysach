#include "KhachHang.h"

void KhachHang::fMuaSach(KHOSACH& B)
{
	cout << "Nhap ma sach ban muon mua: " << endl;
	string maSach;
	cin >> maSach;
	for (auto i = B.listSach.begin(); i != B.listSach.end(); i++)
	{
		if ((*i).maSach == maSach)
		{
			HoaDon temp;
			temp.tenSach = (*i).tenSach;
			cout << "Nhap so luong sach ban muon mua: ";
			int soLuong;
			cin >> soLuong;
			temp.soLuong = soLuong;
			temp.giaTien = (*i).giaSach;
			KhachHoaDon.DanhSach.push_back(temp);
		}
	}
}

void KhachHang::fCheckOut()
{
	for (auto i = KhachHoaDon.DanhSach.begin(); i != KhachHoaDon.DanhSach.end(); i++)
	{
		(*i).fXuatHoaDon();
	}
	KhachHoaDon.fGhiHoaDon(KhachHoaDon);
}
