#include "NXB.h"

void NXB::fKhoaSach(KHOSACH& B)
{
	string maSach;
	cin.ignore();
	cout << "Nhap ma sach can khoa: ";
	getline(cin, maSach);
	for (auto i = B.listSach.begin(); i != B.listSach.end(); i++)
	{
		if ((*i).maSach == maSach && (*i).nhaXuatBan == N.ID)
		{
			if ((*i).khoaSach == 0 || (*i).khoaSach == 2)
			{
				(*i).khoaSach++;
			}
		}
	}
}
void NXB::fInDanhSach(KHOSACH& B)
{
	for (auto i = B.listSach.begin(); i != listSach.end(); i++)
	{
		if (((*i).khoaSach != 2 || (*i).khoaSach != 3) && (*i).khoaSach == 1 && (*i).nhaXuatBan == N.ID)
		{
			(*i).fXuatSach();
		}
	}
}

void NXB::fMoSach(KHOSACH& B)
{
	string maSach;
	cin.ignore();
	cout << "Nhap ma sach can mo khoa: ";
	getline(cin, maSach);
	for (auto i = B.listSach.begin(); i != B.listSach.end(); i++)
	{
		if ((*i).maSach == maSach && (*i).nhaXuatBan == N.ID)
		{
			if ((*i).khoaSach == 1 || (*i).khoaSach == 3)
			{
				(*i).khoaSach--;
			}
		}
	}
}
